#ifndef FULLSCREEN_H
#define FULLSCREEN_H

#include <QWidget>
#include"global.h"

namespace Ui {
class fullScreen;
}

class fullScreen : public QWidget
{
    Q_OBJECT

public:
    explicit fullScreen(QWidget *parent = 0);
    ~fullScreen();
    void showImageWithUI(cv::Mat matImage);

protected:
        void mouseDoubleClickEvent(QMouseEvent *event);
        void keyPressEvent(QKeyEvent *event);

signals:
    void display(int number);
    void exitFullScreen();

private:
    Ui::fullScreen *ui;
};

#endif // FULLSCREEN_H
