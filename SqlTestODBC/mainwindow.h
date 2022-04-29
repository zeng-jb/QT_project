#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <qvalidator.h>
#include <QDebug>
#include <list>
#include <QLineEdit>
#include <QBrush>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlRecord>
#include <QComboBox>
#include <QMouseEvent>
#include <QApplication>
#include<QTableView>
#include <string>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QSqlTableModel>
#include<stdio.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
