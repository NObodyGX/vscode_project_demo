#ifndef VIDEO_WIDGET_H
#define VIDEO_WIDGET_H

#include <QPushButton>

class VideoWidget : public QPushButton
{
    Q_OBJECT

public:
    VideoWidget(QWidget *parent = nullptr);

private:
    QPoint dragPosition;            	//保存鼠标点相对电子时钟窗体左上角的偏移值
    bool showColon;                  	//用于显示时间时是否显示“：”
};
#endif // VIDEO_WIDGET_H