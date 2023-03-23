#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextCodec>

/* QProcess:用于启动一个外部程序并与其进行通信
 * start(QString exeName,QStringList arguments):启动进程函数，参数1：程序名称     参数2：运行程序所需要的命令行参数
 * 执行start()->QProcess进入Starting状态
 * 程序已经运行后，QProcess进入Running状态，然后emit started()信号
 * 当进程退出后，QProcess重新进入NotRunning()状态（初始状态），同时emit finished()信号（提供了进程的退出代码和退出状态）
 * exitCode()获取上一个结束的进程的退出代码
 * exitStatus()获取它的退出状态
 * 任何时间发生错误，QProcess都会发射error()信号，可以调用error()来查看错误的类型和上次发生的错误
 * 使用state()可以查看当前进程的状态
 * QProcess允许将一个进程视为一个顺序的I/O设备，可以像使用QTcpSocket访问一个网络连接一样来读/写一个进程
 * 可以调用write()向进程的标准输入进行写入，调用read(),readLine()和getChar()等从标准输出进行读取
 * QProcess继承自QIODevice
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&myProcess, &QProcess::readyRead, this, &MainWindow::showResult);
    connect(&myProcess, &QProcess::stateChanged,this, &MainWindow::showState); //1
    connect(&myProcess, &QProcess::errorOccurred,this, &MainWindow::showError);
    connect(&myProcess, SIGNAL(finished(int,QProcess::ExitStatus)),this, SLOT(showFinished(int, QProcess::ExitStatus)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString program = "cmd.exe";
    QStringList arguments;
    arguments << "/c dir&pause";
    qDebug() << "result = " << arguments;
    myProcess.start(program, arguments); //start()启动进程，含参数 （QString,QStringList）
}

void MainWindow::showResult()
{
    QTextCodec *codec = QTextCodec::codecForLocale(); //返回指向最适合当前语言环境的编解码器的指针
    qDebug() << "showResult: " << endl << codec->toUnicode(myProcess.readAll()); //将读取到的信息转换为Unicode
}

void MainWindow::showState(QProcess::ProcessState state)
{
    qDebug() << "showState: ";
    if (state == QProcess::NotRunning) {
        qDebug() << "Not Running";
    } else if (state == QProcess::Starting) {
        qDebug() << "Starting";
    }  else {
        qDebug() << "Running";
    }
}

void MainWindow::showError()
{
    qDebug() << "showError: " << endl << myProcess.errorString(); //显示错误的字符串信息
}

void MainWindow::showFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    qDebug() << "showFinished: " << endl << exitCode << exitStatus;
}


