#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("test_db");
    db.setUserName("root");
    db.setPassword("Zeng19980715**");
    bool ok = db.open();
    if (ok){
        QMessageBox::information(this, "infor", "success");
    }
    else {
        QMessageBox::information(this, "infor", "open failed");
    }

    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("student");
    model->select();

    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}
