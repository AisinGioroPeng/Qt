#include <QtCore>
#include <stdio.h>
#include <stdlib.h>
#include <QDebug>

const int DataSize = 10; //生产者将要产生数据的数量
const int BufferSize = 5; //环形缓冲区的大小，它比DataSize小，意味着某一时刻生产者将要到达缓冲区的终点，然后从起点重新开始
char buffer[BufferSize];
//这两个信号量一起保证了生产者永远不会在消费者前多于BufferSize个字节，消费者永远不会读取生产者还没有生产的数据
QSemaphore freeBytes(BufferSize); //控制缓冲区的空闲区域（生产者还没有添加区域或者消费者已经进行了读取的区域） freeBytes信号量初始化为BufferSize，因为要保证最开始整个缓冲区是空的
QSemaphore usedBytes; //已经使用了的缓冲区区域（生产者已经添加数据但是消费者还没有进行读取的区域）  usedBytes信号量初始化为0
// 生产者
class Producer : public QThread
{
public:
    void run();
};

void Producer::run()
{
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    for (int i = 0; i < DataSize; ++i) {
        freeBytes.acquire(); //用于获得一定数量的资源，默认获得一个资源，如果要获得的资源数目大于可用的资源数目（可以使用available()函数来获得），那么这个调用将会被阻塞，直到有足够的可用资源
        buffer[i % BufferSize] = "ACGT"[(int)qrand() % 4];
        qDebug() << QString("producer: %1").arg(buffer[i % BufferSize]);
        usedBytes.release(); //生产者使用release()释放了usedBytes信号量的一个字节，这样空闲字节成功转换成了已经被使用的字节，等待被消费者进行读取
    }
}

// 消费者
class Consumer : public QThread
{
public:
    void run();
};

void Consumer::run()
{
    for (int i = 0; i < DataSize; ++i) {
        usedBytes.acquire();
        qDebug() << QString("consumer: %1").arg(buffer[i % BufferSize]);
        freeBytes.release();
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Producer producer;
    Consumer consumer;
    producer.start();
    consumer.start();
    producer.wait(); //wait()确保在程序退出以前这两个线程有时间执行完毕
    consumer.wait();
    return app.exec();
}
