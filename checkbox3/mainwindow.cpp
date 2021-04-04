#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(oncheckBox_clicked()));
     connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(oncheckBox_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    ui->label->setStyleSheet("color:#ff0000");
    if(ui->checkBox->isChecked())
    {
        stream<<"Bold is checked"<<endl;
    }
    else
    {
        stream<<"Bold is unchecked"<<endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
     ui->label->setStyleSheet("color:#00aa00");
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Italic is checked"<<endl;
    }
    else
    {
        stream<<"Italic is unchecked"<<endl;
    }
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream stream(stdout);
     ui->label->setStyleSheet("color:#ff5500");
     if(ui->radioButton->isChecked())
     {
         stream<<"Left is clicked"<<endl;
     }
}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
     ui->label->setStyleSheet("color:#ff557f");
     if(ui->radioButton_2->isChecked())
     {
         stream<<"Right is clicked"<<endl;
     }
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
     ui->label->setStyleSheet("color:#aa0000");
     if(ui->radioButton_3->isChecked())
     {
         stream<<"Center is clicked"<<endl;
     }
}
