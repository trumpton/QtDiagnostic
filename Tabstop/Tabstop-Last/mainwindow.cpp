#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_action_Tab1_Control_2_triggered()
{
    ui->tabWidget->setCurrentIndex(0) ;
    ui->lineEdit_Tab1_Control2->setFocus() ;
    ui->statusBar->showMessage("Selected Tab1, Control2",5000);
}

void MainWindow::on_actionTab_2_Control_2_triggered()
{
    ui->tabWidget->setCurrentIndex(1) ;
    ui->lineEdit_Tab2_Control2->setFocus() ;
    ui->statusBar->showMessage("Selected Tab2, Control2",5000);
}
