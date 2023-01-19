#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>
#include<fstream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
   int system(const char * string);
   system("echo 我渐渐地脱离凡尘，疏远世人，结果便是一任愤懑与羞恨日益助长内心那怯弱的自尊心");
   system("echo  权力越大，责任越大");
    return a.exec();
}
