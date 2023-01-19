#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on__CHEN_clicked(bool checked);

    void on__CHEN2_clicked(bool checked);

    void on__CHEN3_clicked(bool checked);

    void on__YU_clicked(bool checked);

    void on__YU2_clicked(bool checked);

    void on__LU1_clicked(bool checked);

    void on__LU2_clicked(bool checked);

    void on__LU3_clicked(bool checked);

    void on__LU4_clicked(bool checked);

    void on__HEX_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
