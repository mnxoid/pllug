#include <QCoreApplication>
#include <QDebug>
#include <QStringList>
#include <QDate>
#include <QVariant>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello!";
    const char* chr{"Hello, world, again!"};
    QByteArray ba{chr};
    qDebug() << ba;
    QString interpolate {"This %1 very %2"};
    qDebug() << interpolate.arg("is").arg("cool");
    qDebug() << interpolate.arg("has a").arg("cool effect");
    QStringList lst;
    QString bottle{"%1 bottles of beer"};
    for(int i=99; i>80; i--) lst << bottle.arg(i);
    lst << lst;//Nice feature
    qDebug() << lst;
    QDate date{QDate::currentDate()};
    qDebug() << date;
    QVariant v{lst};
    qDebug() << v;
    return a.exec();
}
