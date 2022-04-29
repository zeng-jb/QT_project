#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include<QGridLayout>
#include<QFileDialog>
#include<QTextCodec>
#include<string>
#include<analyzeprogram.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    this->resize(1200,650);
    this->setWindowTitle("C++单词拼装器");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //指定为GBK
    QTextCodec *codec = QTextCodec::codecForName("GBK");

    QString FileName = QFileDialog::getOpenFileName(this,"open file","G:",tr("*.cpp"));

    if(FileName.isEmpty() == false)
       {
           QFile file(FileName);
           bool fileok = file.open(QIODevice::ReadOnly);
           if(fileok == true)
           {
               QByteArray array = file.readAll();
               //将读取到的行数据转换为Unicode
               QString str = codec->toUnicode(array);
               //将得到的字符设置到编辑框中显示
               ui->textEdit->setText(str);
           }

           file.close();
       }
}

void MainWindow::on_pushButton_2_clicked()
{

    QString str = ui->textEdit->toPlainText();
    std::string str1 = str.toStdString();
//    ui->textBrowser->setText(QString::fromStdString(str1));
    AnalyzeProgram ana(str1);
    ana.analyse();
    std::string ch = ana.getResult();
    QString ch2 = QString::fromStdString(ch);
    ui->textBrowser->setText(ch2);
}
