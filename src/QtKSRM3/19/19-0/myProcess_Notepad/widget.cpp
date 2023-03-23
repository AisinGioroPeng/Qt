#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_StartProcess_clicked()
{
    myProcess.start("notepad.exe"); //Win系统的记事本程序，在Windows的系统目录下，该目录已经加在了系统PATH环境变量中，所以不需要写具体路径
}
