#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);
    void stop();
protected:
    void run();
private:
    volatile bool stopped; //是它在任何时候都保持最新的值，从而可以避免在多个线程中访问它时会出错
};


#endif // MYTHREAD_H
