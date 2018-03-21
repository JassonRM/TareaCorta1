#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "bigarray.h"

namespace Ui {

class MainWindow;
}

/**
 *Ventana principal de la app
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    /**
     * @brief openedFile Path del archivo abierto
     */
    QString openedFile;
    /**
     * @brief openedArray Array cargado en memoria
     */
    bigarray *openedArray = nullptr;


public slots:
    /**
     * @brief browseFile Selecciona el archivo
     */
    void browseFile();
    /**
     * @brief loadFile Carga lo esencial del archivo en memoria
     */
    void loadFile();
    /**
     * @brief sort Ordena el archivo
     */
    void sort();
    /**
     * @brief print Imprime en pantalla el array
     */
    void print();
};

#endif // MAINWINDOW_H
