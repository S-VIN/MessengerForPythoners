#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "messages.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Messages messages;
    messages.printToTable(ui->tableWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

