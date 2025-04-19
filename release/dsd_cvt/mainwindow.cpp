#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //菜单栏绑定监听
    connect(ui->helpaction,&QAction::triggered,this,&MainWindow::helpActionSlot);
    connect(ui->authoraction,&QAction::triggered,this,&MainWindow::authorActionSlot);
    connect(ui->declareaction,&QAction::triggered,this,&MainWindow::declareActionSlot);

    //绑定键盘快捷键
    ui->pushButton_0->setShortcut(QKeySequence(Qt::Key_0));
    ui->pushButton_1->setShortcut(QKeySequence(Qt::Key_1));
    ui->pushButton_2->setShortcut(QKeySequence(Qt::Key_2));
    ui->pushButton_3->setShortcut(QKeySequence(Qt::Key_3));
    ui->pushButton_4->setShortcut(QKeySequence(Qt::Key_4));
    ui->pushButton_5->setShortcut(QKeySequence(Qt::Key_5));
    ui->pushButton_6->setShortcut(QKeySequence(Qt::Key_6));
    ui->pushButton_7->setShortcut(QKeySequence(Qt::Key_7));
    ui->pushButton_8->setShortcut(QKeySequence(Qt::Key_8));
    ui->pushButton_9->setShortcut(QKeySequence(Qt::Key_9));
    ui->pushButton_A->setShortcut(QKeySequence(Qt::Key_A));
    ui->pushButton_B->setShortcut(QKeySequence(Qt::Key_B));
    ui->pushButton_C->setShortcut(QKeySequence(Qt::Key_C));
    ui->pushButton_D->setShortcut(QKeySequence(Qt::Key_D));
    ui->pushButton_E->setShortcut(QKeySequence(Qt::Key_E));
    ui->pushButton_F->setShortcut(QKeySequence(Qt::Key_F));
    ui->pushButton_back->setShortcut(QKeySequence(Qt::Key_Backspace));
    ui->pushButton_CE->setShortcut(QKeySequence(Qt::Key_Escape));
    ui->cvtpushButton->setShortcut(QKeySequence(Qt::Key_Return));

    //程序图标
    this->setWindowIcon(QIcon(":/img/icon.ico"));

    //pushbutton样式
    ui->cvtpushButton->setStyleSheet(
        "QPushButton {"
        "   background-color: #008CBA;"
        "   font:22pt 仿宋;"
        "   color: white;"
        "   border: none;"
        "   border-radius: 4px;"
        "   padding: 10px 20px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #007399;"
        "}"
        "QPushButton:pressed {"
        "   background-color: #005f7a;"
        "}"
        "QPushButton:disabled {"
        "   background-color: #cccccc;"
        "   color: #666666;"
        "}"
    );

    ui->pushButton_0->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_1->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_2->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_3->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_4->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_5->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_6->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_7->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_8->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_9->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_A->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_B->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_C->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_D->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_E->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_F->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_back->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );

    ui->pushButton_CE->setStyleSheet(
                "QPushButton {background-color: #FCFCFC;font:14pt 微软雅黑;color: black;border: none;border-radius: 4px;padding: 10px 20px;}"
                "QPushButton:hover {background-color: #E5F1FB;}"
                "QPushButton:pressed {background-color: #F4F4F4;}"
                "QPushButton:disabled {background-color: #cccccc;color: #666666;}"
    );
}

MainWindow::~MainWindow()
{
    delete ui;
}
//菜单栏监听
void MainWindow::helpActionSlot()
{
    QMessageBox::information(this,"使用及帮助","请联系作者获取帮助~");
}

void MainWindow::authorActionSlot()
{
    QMessageBox::information(this,"作者信息","2023级计信院软件工程3班\n088陈子涵\n090陈奇胜（组长）\n102郑竣文");
}

void MainWindow::declareActionSlot()
{
    QMessageBox::warning(this,"软件使用声明","重要提示：\n\n请您（以下简称“用户”）在使用本软件前仔细阅读本声明。一旦安装、运行或以其任何形式使用本软件，即视为已充分理解并同意本声明的全部内容。如不同意，请立即停止使用并卸载本软件。\n\n一、软件许可\n本软件著作权归作者（以下简称“授权方”）所有，受国际版权法及中国相关法律保护。授权方向用户授予非独占、不可转让的有限使用许可，用户可在遵守本声明的前提下，将本软件安装于个人或授权设备中使用。禁止对软件进行逆向工程、反编译、修改、出租、转售或用于商业目的（除非获得书面授权）。\n\n二、使用限制\n用户不得利用本软件从事任何违法、侵权或损害第三方权益的活动。禁止删除、篡改软件内置的版权信息、标识或安全机制。\n\n三、用户责任\n用户使用本软件产生的数据（如配置文件、缓存等）归属用户。\n\n四、免责声明\n本软件按“现状”提供，授权方不保证软件无错误、不中断运行，亦不承担因软件缺陷导致的任何直接/间接损失。因不可抗力、第三方攻击或用户设备故障等导致的程序崩溃或服务中断，授权方不承担责任。软件中包含第三方开源代码，相关权利义务需遵循对应开源协议。\n\n五、协议终止\n用户可随时停止使用并卸载本软件以终止本协议。若用户违反本声明，授权方有权立即终止许可，并要求用户停止使用、删除软件副本及相关数据。\n\n六、法律适用与争议解决\n本声明适用相关的中国法律，争议应提交法院/仲裁机构管辖。授权方保留对本声明的最终解释权及修改权，修改后将以弹窗提示或官网公告形式通知用户。\n\n七、其他\n本声明构成用户与授权方的完整协议，取代任何口头或书面沟通。如需获取技术支持或报告问题，请联系授权方。\n\n附：隐私保护说明\n本软件没有联网功能，不会收集任何有关用户的个人信息。请放心使用。");
}
//pushbutton槽函数监听
void MainWindow::on_pushButton_0_clicked()
{
    inputstr+="0";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_1_clicked()
{
    inputstr+="1";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_2_clicked()
{
    inputstr+="2";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_3_clicked()
{
    inputstr+="3";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_4_clicked()
{
    inputstr+="4";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_5_clicked()
{
    inputstr+="5";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_6_clicked()
{
    inputstr+="6";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_7_clicked()
{
    inputstr+="7";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_8_clicked()
{
    inputstr+="8";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_9_clicked()
{
    inputstr+="9";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_A_clicked()
{
    inputstr+="A";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_B_clicked()
{
    inputstr+="B";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_C_clicked()
{
    inputstr+="C";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_D_clicked()
{
    inputstr+="D";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_E_clicked()
{
    inputstr+="E";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_F_clicked()
{
    inputstr+="F";
    ui->inputlineEdit->setText(inputstr);
}

void MainWindow::on_pushButton_CE_clicked()
{
    inputstr.clear();
    ui->inputlineEdit->clear();
    ui->outputlineEdit_1->clear();
    ui->outputlineEdit_2->clear();
    ui->to2lineEdit->clear();
    ui->to8lineEdit->clear();
    ui->to10lineEdit->clear();
    ui->to16lineEdit->clear();
    ui->remindlabel->setText("开始使用吧！");
}

void MainWindow::on_pushButton_back_clicked()
{
    inputstr.chop(1);
    ui->inputlineEdit->setText(inputstr);

    ui->outputlineEdit_1->clear();
    ui->outputlineEdit_2->clear();
    ui->to2lineEdit->clear();
    ui->to8lineEdit->clear();
    ui->to10lineEdit->clear();
    ui->to16lineEdit->clear();
}

//下拉框获取进制值
void MainWindow::on_comboBox1_currentIndexChanged(int index1)
{
    M=index1+1;
//    qDebug()<<M;
}
void MainWindow::on_comboBox2_currentIndexChanged(int index2)
{
    N=index2+1;
//    qDebug()<<N;
}
//监听输入框中的字符串
void MainWindow::on_inputlineEdit_editingFinished()
{
    inputstr=ui->inputlineEdit->text();
    //qDebug()<<inputstr;
}
//执行转换
void MainWindow::on_cvtpushButton_clicked()
{
    qstr2char(inputstr);
    if (M == N && M>1 && N>1) {
        QMessageBox::warning(this,"进制选择异常","相同进制转换无意义！");
        ui->remindlabel->setText("请重新选择进制！");
        setIOclear();
    }
    else if (M<=1 || N<=1){
        QMessageBox::warning(this,"进制选择异常","进制不能为空！");
        setIOclear();
        ui->remindlabel->setText("请选择任意进制进行转换！");
    }
    else if (x[0]=='\0'){
        QMessageBox::warning(this,"输入异常","输入不能为空！");
        setIOclear();
        ui->remindlabel->setText("请输入非空有效数值！");
    }
    else {
        long long MD = m_to_dec(x, M);
        if (MD == -1) {
            QMessageBox::warning(this,"输入异常！",QString::number(M)+"进制下输入了非法值！");
            setIOclear();
            ui->remindlabel->setText("请重新输入"+QString::number(M)+"进制下的合法值！");
        }
        else {
            char *result_stack=dec_to_n_stack(MD, N);
            char *result_arr=dec_to_n_arr(MD, N);
            char *result_to2=dec_to_n_arr(MD, 2);
            char *result_to8=dec_to_n_arr(MD, 8);
            char *result_to10=dec_to_n_arr(MD, 10);
            char *result_to16=dec_to_n_arr(MD, 16);
            outputstr1=QString::fromUtf8(result_arr);
            outputstr2=QString::fromUtf8(result_stack);

            to2str=QString::fromUtf8(result_to2);
            to8str=QString::fromUtf8(result_to8);
            to10str=QString::fromUtf8(result_to10);
            to16str=QString::fromUtf8(result_to16);

            free(result_stack);
            free(result_arr);
            free(result_to2);
            free(result_to8);
            free(result_to10);
            free(result_to16);

            showResult();
        }
    }

}

void MainWindow::showResult()
{
    ui->remindlabel->setText("转换成功！可以右键复制结果至剪切板！");
    ui->outputlineEdit_1->setText(outputstr1);
    ui->outputlineEdit_2->setText(outputstr2);
    ui->to2lineEdit->setText(to2str);
    ui->to8lineEdit->setText(to8str);
    ui->to10lineEdit->setText(to10str);
    ui->to16lineEdit->setText(to16str);
}
//清空所有lineedit
void MainWindow::setIOclear()
{
    inputstr.clear();
    ui->inputlineEdit->clear();
    ui->outputlineEdit_1->clear();
    ui->outputlineEdit_2->clear();
    ui->to2lineEdit->clear();
    ui->to8lineEdit->clear();
    ui->to10lineEdit->clear();
    ui->to16lineEdit->clear();
    ui->remindlabel->setText("");
}

//把QString转换成char*
void MainWindow::qstr2char(QString qstr)
{
    QByteArray ba=qstr.toLatin1();
    x=ba.data();
}

// 将字符转换为对应的数值
int MainWindow::char_to_value(char c)
{
    if (isdigit(c)) {
        return c-'0';
    }
    else if (isupper(c)) {
        return c-'A'+10;
    }
    else if (islower(c)) {
        return c-'a'+10;
    }
    return -1; // 非法字符
}

// M进制转十进制
long long MainWindow::m_to_dec(const char *x, int m)
{
    int is_negative = 0;
    int start_index = 0;

    // 检查是否有负号
    if (x[0] == '-') {
        is_negative = 1;
        start_index = 1;
    }

    long long dec = 0;
    for (int i = start_index; x[i] != '\0'; i++) {
        int digit = char_to_value(x[i]);
        if (digit == -1 || digit >= m) {
            return -1;
        }
        dec = dec * m + digit;
    }

    return is_negative ? -dec : dec;
}

// 获取对应字符
char MainWindow::value_to_char(int value)
{
    if (value < 10) {
        return value + '0';
    }
    else {
        return value - 10 + 'A';
    }
}

// 方法一：使用栈实现十进制转N进制
char* MainWindow::dec_to_n_stack(long long dec, int n)
{
    if (dec == 0) {
        char *result = (char *)malloc(2);
        strcpy(result, "0");
        return result;
    }

    char stack[100];
    int top = -1;
    int is_negative = 0;

    if (dec < 0) {
        is_negative = 1;
        dec = -dec;
    }

    while (dec != 0) {
        int rem = dec % n;
        // 处理负数余数
        if (rem < 0) {
            rem -= n;
            dec += n;
        }
        stack[++top] = value_to_char(abs(rem));
        dec /= n;
    }

    int length = top + 1 + is_negative;
    char *result = (char *)malloc(length + 1);
    int index = 0;

    if (is_negative) {
        result[index++] = '-';
    }

    while (top >= 0) {
        result[index++] = stack[top--];
    }

    result[index] = '\0';
    return result;
}

// 方法二：使用数组实现十进制转N进制
char* MainWindow::dec_to_n_arr(long long dec, int n)
{
    if (dec == 0) {
        char *result = (char *)malloc(2);
        strcpy(result, "0");
        return result;
    }

    char digits[100];
    int index = 0;
    int is_negative = 0;

    if (dec < 0) {
        is_negative = 1;
        dec = -dec;
    }

    while (dec != 0) {
        int rem = dec % n;
        // 处理负数余数
        if (rem < 0) {
            rem -= n;
            dec += n;
        }
        digits[index++] = value_to_char(abs(rem));
        dec /= n;
    }

    int length = index + is_negative;
    char *result = (char *)malloc(length + 1);
    int result_index = 0;

    if (is_negative) {
        result[result_index++] = '-';
    }

    for (int i = index - 1; i >= 0; i--) {
        result[result_index++] = digits[i];
    }

    result[result_index] = '\0';
    return result;
}

