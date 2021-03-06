#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    messages.printToTable(ui->tableWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    messages.addMessage({"stepan", ui->lineEdit->text()});
    messages.printToTable(ui->tableWidget);
    ui->lineEdit->clear();
}

void MainWindow::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}
