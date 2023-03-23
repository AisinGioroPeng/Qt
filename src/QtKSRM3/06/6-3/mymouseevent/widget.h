#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QPoint offset;                       // 用来储存鼠标指针位置与窗口位置的差值

protected:
    void mousePressEvent(QMouseEvent *event); //鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *event); //鼠标松开事件
    void mouseDoubleClickEvent(QMouseEvent *event); //鼠标双击事件
    void mouseMoveEvent(QMouseEvent *event); //鼠标移动事件
    void wheelEvent(QWheelEvent *event); //滚轮事件

};

#endif // WIDGET_H
