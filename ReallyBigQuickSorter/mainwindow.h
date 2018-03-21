#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "bigarray.h"

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
    QString openedFile;
    bigarray *openedArray;
    bool loaded = false;


public slots:
    void browseFile();
    void loadFile();
    void sort();
    void print();
};

#endif // MAINWINDOW_H
