#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *btn = new QPushButton;

    btn->setText("按钮");

    btn->setFixedSize(100,40);

    btn->setParent(this);

    connect(btn,&QPushButton::clicked,this,&MainWindow::handleClient);

}

void MainWindow::handleClient(){
    qDebug() << "点击了按钮";
}

MainWindow::~MainWindow()
{
    //delete ui;
}

