#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{
    stopped = false;
}

void MyThread::run()
{
    qreal i = 0;
    while (!stopped) //这里就一直判断stopped变量的值，只要它为false，那么就每隔1s打印一次字符串
    {
        qDebug() << QString("in MyThread: %1").arg(i);
        msleep(1000);
        i++;
    }
    stopped = false;
}

void MyThread::stop()
{
    stopped = true;
}
