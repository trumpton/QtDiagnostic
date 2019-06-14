#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("List Widget Item 1");
    ui->listWidget->addItem("List Widget Item 2");
    ui->listWidget->addItem("List Widget Item 3");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionTest_1_triggered()
{
    ui->tabWidget->setCurrentIndex(2);
    ui->tab_2->setFocus() ;
    ui->plainTextEdit->setFocus() ;
    ui->plainTextEdit->setPlainText("Focus set to tab 2 and plaintext edit.");
}

void MainWindow::on_actionTest_2_triggered()
{
    ui->tabWidget->setCurrentIndex(2);
    ui->tab_2->setFocus() ;
    ui->plainTextEdit->setFocus() ;
    ui->plainTextEdit->setPlainText("Focus set to tab 2 and plaintext edit.\nThen index changed to Item 2 in List.");
    ui->listWidget->setCurrentRow(1);
}

void MainWindow::on_actionTest_3_triggered()
{
    ui->tabWidget->setCurrentIndex(2);
    ui->tab_2->setFocus() ;
    ui->plainTextEdit->setFocus() ;
    ui->plainTextEdit->setPlainText("Focus set to tab 2 and plaintext edit.\nThen index changed to Item 3 in List.");
    ui->listWidget->setCurrentRow(2);
}
