#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QKeyEvent>
#include <QPushButton>
#include <QDialog>

#include <cstdlib>
#include <cstring>
#include <cctype>
#include <iostream>

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
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_A_clicked();
    void on_pushButton_B_clicked();
    void on_pushButton_C_clicked();
    void on_pushButton_D_clicked();
    void on_pushButton_E_clicked();
    void on_pushButton_F_clicked();
    void on_pushButton_CE_clicked();
    void on_pushButton_back_clicked();

    void helpActionSlot();
    void authorActionSlot();
    void declareActionSlot();

    void on_comboBox1_currentIndexChanged(int index);
    void on_comboBox2_currentIndexChanged(int index);
    void on_cvtpushButton_clicked();
    void showResult();
    void setIOclear();

    void on_inputlineEdit_editingFinished();

private:
    Ui::MainWindow *ui;

    QString inputstr,outputstr1,outputstr2;
    QString to2str,to8str,to10str,to16str;
    int M=0, N=0;
    char* x;

    int char_to_value(char c);
    long long m_to_dec(const char *x, int m);
    char value_to_char(int value);
    char *dec_to_n_stack(long long dec, int n);
    char *dec_to_n_arr(long long dec, int n);


    void qstr2char(QString qs);
};

#endif // MAINWINDOW_H
