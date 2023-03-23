#include <QCoreApplication>
#include <QFileInfo>
#include <QStringList>
#include <QDateTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 以只写方式打开，如果文件不存在，那么会创建该文件
    QFile file("myfile.txt");
    if (!file.open(QIODevice::WriteOnly  | QIODevice::Text)) //以只写模式和文本模式打开文件
        qDebug() << file.errorString();
    file.write("helloQt!\nyafeilinux"); //QIODevice::Text在win上将\n自动转换为\r\n 所以原本大小应该是19，加上QIODevice::Text的方式打开\n转换为\r\n文件大小变成了20
    file.close();

    // 获取文件信息
    QFileInfo info(file);
    qDebug() << QObject::tr("绝对路径：") << info.absoluteFilePath() << endl
             << QObject::tr("文件名：") << info.fileName() << endl
             << QObject::tr("基本名称：") << info.baseName() << endl
             << QObject::tr("后缀：") << info.suffix() << endl
             << QObject::tr("创建时间：") << info.created() << endl
             << QObject::tr("大小：") << info.size();
    // 以只读方式打开
    if (!file.open(QIODevice::ReadOnly  | QIODevice::Text))
        qDebug() << file.errorString();
    qDebug() << QObject::tr("文件内容：") << endl << file.readAll(); //通过readAll()读取文件中的所有内容
    qDebug() << QObject::tr("当前位置：") << file.pos(); //因为readAll()读取完了，光标pos()应该放在了文件数据的结尾部分
    file.seek(0); //将光标放在文件的开始部分，0位置在第一个字符的前面，对于每一个open函数，一定要在操作完成后使用close()函数将文件关闭
    QByteArray array;
    array = file.read(5);
    qDebug() << QObject::tr("前5个字符：") << array
             << QObject::tr("当前位置：") << file.pos();
    file.seek(15);
    array = file.read(5);
    qDebug() << QObject::tr("第16-20个字符：") << array;
    file.close();

    return a.exec();
}

