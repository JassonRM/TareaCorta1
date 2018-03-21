#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include<iostream>

#include "QuickSort.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::connect(ui->browseBtn, SIGNAL(released()), this, SLOT(browseFile()));
    MainWindow::connect(ui->loadBtn, SIGNAL(released()), this, SLOT(loadFile()));
    MainWindow::connect(ui->sortBtn, SIGNAL(released()), this, SLOT(sort()));
    MainWindow::connect(ui->printBtn, SIGNAL(released()), this, SLOT(print()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::browseFile(){
    openedFile = QFileDialog::getOpenFileName(this, tr("Open Big Array"), QDir::homePath(), tr("Binary files(*.bin)"));
    ui->adressInput->setText(openedFile);
}

void MainWindow::loadFile(){
    if(openedArray != nullptr){
        delete openedArray;
    }
    openedArray = new bigarray(openedFile.toStdString());
}

void MainWindow::sort(){
    quickSort(*openedArray, 0, ui->sizeInput->text().toInt());
}

void MainWindow::print(){
    int size = ui->sizeInput->text().toInt();
    for (int i = 0; i < size; i++){
        ui->arrayOutput->append(QString::number(openedArray->operator [](i)));
    }
}
