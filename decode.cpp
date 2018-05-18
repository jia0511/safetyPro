#include "decode.h"

decode::decode(QWidget *parent) :
    QWidget(parent)
{

}

decode::~decode()
{
    DesFfmpegFunction();
}


void decode::DesFfmpegFunction()
{
    if(mpNULL != out_buffer) {
        av_free(out_buffer);
        out_buffer = mpNULL;
    }
    if(mpNULL != pFrameBGR){
        av_free(pFrameBGR);
        pFrameBGR = mpNULL;
    }
    if(mpNULL != pAvFrame){
        av_free(pAvFrame);
        pCodecCtx = mpNULL;
    }
    if(mpNULL != pCodecCtx){
        avcodec_close(pCodecCtx);
      pCodecCtx  = mpNULL;
    }
    if(mpNULL != pFormatCtx){
        avformat_close_input(&pFormatCtx);
      pFormatCtx  = mpNULL;
    }
   if(mpNULL != img_convert_ctx){
        sws_freeContext(img_convert_ctx);
      img_convert_ctx  = mpNULL;
   }
}

void decode::InitFfmpegFunction(  const char* filename)
{
     if(NULL == filename ) {
         cout<<"filename is NULL!"<<endl;
         return;
     }

     m_bFlagDone = mpFALSE;
    avcodec_register_all();
    av_register_all();
    avformat_network_init();
    pFormatCtx = avformat_alloc_context();
     //filename = "rtsp://admin:admin@192.168.1.118:554/cam/realmonitor?channel=2&subtype=1";
   // filename = "rtsp://admin:admin12345@192.168.1.2:554/h264/ch1/main/av_stream";

    AVDictionary* options = NULL;
   av_dict_set(&options, "buffer_size", "1024000", 0);
   av_dict_set(&options, "max_delay", "5000000", 0);
    av_dict_set(&options, "stimeout", "2000000", 0);
    av_dict_set(&options, "rtsp_transport", "tcp", 0);
    if (avformat_open_input(&pFormatCtx, filename, NULL, &options) != 0)
    {
        cout<<"avformat_open_input"<<endl;
        return;
    }

    if (avformat_find_stream_info(pFormatCtx,NULL) < 0)
    {
        cout<<"avformat_find_stream_info"<<endl;
        return;
    }

    for (int i=0; i < pFormatCtx->nb_streams; i++)
    {
        if (pFormatCtx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO)
        {
            videoindex = i;
            break;
        }
    }

    if (videoindex == -1)
    {
        cout<<"videoindex:can not find stream info."<<endl;
        return ;
    }

    pCodecCtx = pFormatCtx->streams[videoindex]->codec;
    pCodec = avcodec_find_decoder(pCodecCtx->codec_id);
    if (pCodec == NULL)
    {
        cout<<"avcodec_find_decoder."<<endl;
        return ;
    }

    if (avcodec_open2(pCodecCtx,pCodec,NULL) < 0)
    {
        cout<<"avcodec_open2."<<endl;
        return ;
    }
    pAvFrame = av_frame_alloc();
    pFrameBGR = av_frame_alloc();

    //m_avPicSize = avpicture_get_size(AV_PIX_FMT_BGR24, pCodecCtx->width, pCodecCtx->height);
    m_avPicSize = avpicture_get_size(AV_PIX_FMT_BGR24, pCodecCtx->width, pCodecCtx->height);
    out_buffer = (uint8_t *)av_malloc(m_avPicSize);

    avpicture_fill((AVPicture *)pFrameBGR, out_buffer, AV_PIX_FMT_BGR24, pCodecCtx->width, pCodecCtx->height);
    packet = (AVPacket*)malloc(sizeof(AVPacket));
   // cout<<"---------------- File Information ---------------"<<endl;
 //   av_dump_format(pFormatCtx, 0, filename, 0);
    //cout<<"-------------------------------------------------"<<endl;

    img_convert_ctx = sws_getContext(pCodecCtx->width,
        pCodecCtx->height,
        pCodecCtx->pix_fmt,
        pCodecCtx->width,
        pCodecCtx->height,
        AV_PIX_FMT_BGR24,
        SWS_BICUBIC,
        NULL,
        NULL,
        NULL);
    pCvMat.create(cv::Size(pCodecCtx->width, pCodecCtx->height), CV_8UC3);
    m_bFlagDone = mpTRUE;
}

void decode::onDecodeframe()
{
        if(!m_bFlagDone){
               return;
        }
       if(av_read_frame(pFormatCtx, packet) <0)
       {
           av_free_packet(packet);
           return;
       }
       if(packet->stream_index != videoindex)
       {
           av_free_packet(packet);
           return;
       }

       int frameFinished ;
       avcodec_decode_video2(pCodecCtx, pAvFrame, &frameFinished, packet);
       if(frameFinished )
       {
           //YUV to RGB
           sws_scale(img_convert_ctx, (const uint8_t* const*)pAvFrame->data, pAvFrame->linesize, 0, pCodecCtx->height, pFrameBGR->data, pFrameBGR->linesize);
           memcpy(pCvMat.data, out_buffer, m_avPicSize);
           Mat mat_after(DECODE_SCREEN_WIDTH,DECODE_SCREEN_HIGHT,CV_8UC3);
           cv::resize(pCvMat,mat_after,cv::Size(DECODE_SCREEN_WIDTH,DECODE_SCREEN_HIGHT));
            mat_after.copyTo(m_matImage);
           //showImageWithUI(mat_after);
    //       cv::imshow("image",mat_after);
     //      waitKey(1);
       }
       av_free_packet(packet);
}
