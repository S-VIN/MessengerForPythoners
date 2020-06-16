#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    messages.printToTable(ui->tableWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_pushButton_clicked()
//{
    //messages.addMessage({"stepan", ui->lineEdit->text()});
    //messages.printToTable(ui->tableWidget);
//}
