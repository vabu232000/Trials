#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgd("D:/vabs/website/portfolio/watercolor.jpg");
    bkgd= bkgd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette pallete;
    pallete.setBrush(QPalette::Background,bkgd);
    this->setPalette(pallete);
}

MainWindow::~MainWindow()
{
    delete ui;
}

