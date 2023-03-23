#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialog w;
    w.resize(400, 300); //设置对话框宽400，高300像素
    QLabel label(&w);
    label.move(120, 120);
    label.setText(QObject::tr("Hello World! 你好Qt！"));
    w.show();
    return a.exec();
}
