#include "mainwindow.h"

#include <iostream>

#include <QApplication>
#include <QDebug>
#include <string>

extern "C"{
#include <libavcodec/avcodec.h>
}


using namespace std;




int main(int argc, char *argv[])
{
    //qDebug() << av_version_info();

//    qDebug() << "hello";

//    string str = av_version_info();

//    cout << str << endl;

//    return 0;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
