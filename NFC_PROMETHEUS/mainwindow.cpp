#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include<fstream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
int system(const char * string);
void MainWindow::on__CHEN_clicked(bool checked)
{
system("apt-get install gcc g++");
system("dpkg -i deb/libnfc.deb");
system("dpkg -i deb/libnfc-dev.deb");
system("dpkg -i deb/libnfc6.deb");
system("dpkg -i deb/libnfc-examples.deb");
system("dpkg -i deb/mfcuk.deb");
system("dpkg -i deb/mfoc.deb");
}
void MainWindow::on__CHEN2_clicked(bool checked)
{
system("cp libnfc.conf /etc/nfc/");
system("echo 文件写入完成");
}
void MainWindow::on__CHEN3_clicked(bool checked)
{
system("nfc-scan-device -v");
}
void MainWindow::on__YU_clicked(bool checked)
{
system("rm -rf file");
}
void MainWindow::on__YU2_clicked(bool checked)
{
system("apt-get --purge remove libnfc-examples");
system("apt-get --purge remove libnfc");
}
void MainWindow::on__LU1_clicked(bool checked)
{
system("echo 扫描ing：如果SAK的值不是08或者ATQA不是0004那么将可能无法读取请使用破解加密尝试");
system("nfc-poll");
}
void MainWindow::on__LU2_clicked(bool checked)
{
system("mkdir file");
system("mfoc -O file/name.dump");
system("echo 正在创建file文件夹");
system("echo 正在创建读取卡片内容并且将内容创建为name.dump保存到file文件夹");
}
void MainWindow::on__LU3_clicked(bool checked)
{
system("mfcuk -C -R 0:A -s 250 -S 250");
system("echo 当输出时INFO: block 3 recovered KEY: 123456789ABC，表示破解成功");
system("echo 将拿到的 Key 传给 mfoc，执行 mfoc -k 123456789ABC -O dump.mfd，就可破解出完整的卡片数据");
}
void MainWindow::on__LU4_clicked(bool checked)
{
    system("nfc-mfclassic w b asd.dump");
    system("echo 正在使用b秘钥将asd.dump写入M1卡");
}

void MainWindow::on__HEX_clicked(bool checked)
{
system("vi %!xxd file/name.dump");
}
