#ifndef DECODE_H
#define DECODE_H

#include <QWidget>
#include "global.h"

namespace Ui {
class decode;
}

class decode : public QWidget
{
    Q_OBJECT

public:
    explicit decode(QWidget *parent = 0);
    ~decode();
    void InitFfmpegFunction(const char* filename);
    void DesFfmpegFunction();
    void onDecodeframe();
    cv::Mat  getDecodeImage(){return m_matImage; }

private:
    AVCodec *pCodec;								//解码器指针
    AVCodecContext* pCodecCtx;						//ffmpeg解码类的类成员
    AVFormatContext* pFormatCtx;					//保存视频流的信息
    int videoindex = -1;
    AVFrame* pAvFrame;                          //多媒体帧，保存解码后的数据帧,并且分配帧存储空间
    AVFrame* pFrameBGR;
    AVPacket* packet;
    SwsContext *img_convert_ctx;												//结构体指针.
    cv::Mat pCvMat;

    int m_avPicSize;

    Mat m_matImage;

    /////////////////////////////////////////////////////////////////////////////////////
    int int_count ;
    int video_count = 1;

    uint8_t *out_buffer;
    mpBOOL m_bFlagDone;
};

#endif // DECODE_H
