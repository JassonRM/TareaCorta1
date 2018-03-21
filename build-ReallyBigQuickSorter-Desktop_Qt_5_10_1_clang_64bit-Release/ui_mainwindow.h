/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *adressInput;
    QPushButton *browseBtn;
    QPushButton *loadBtn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *sizeInput;
    QPushButton *sortBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *printBtn;
    QTextEdit *arrayOutput;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(605, 509);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 9, 571, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        adressInput = new QLineEdit(verticalLayoutWidget);
        adressInput->setObjectName(QStringLiteral("adressInput"));

        horizontalLayout->addWidget(adressInput);

        browseBtn = new QPushButton(verticalLayoutWidget);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));

        horizontalLayout->addWidget(browseBtn);

        loadBtn = new QPushButton(verticalLayoutWidget);
        loadBtn->setObjectName(QStringLiteral("loadBtn"));

        horizontalLayout->addWidget(loadBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        sizeInput = new QLineEdit(verticalLayoutWidget);
        sizeInput->setObjectName(QStringLiteral("sizeInput"));
        sizeInput->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(sizeInput);

        sortBtn = new QPushButton(verticalLayoutWidget);
        sortBtn->setObjectName(QStringLiteral("sortBtn"));

        horizontalLayout_2->addWidget(sortBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        printBtn = new QPushButton(verticalLayoutWidget);
        printBtn->setObjectName(QStringLiteral("printBtn"));

        verticalLayout->addWidget(printBtn);

        arrayOutput = new QTextEdit(verticalLayoutWidget);
        arrayOutput->setObjectName(QStringLiteral("arrayOutput"));

        verticalLayout->addWidget(arrayOutput);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QuickSort", nullptr));
        browseBtn->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        loadBtn->setText(QApplication::translate("MainWindow", "Load file", nullptr));
        sizeInput->setPlaceholderText(QApplication::translate("MainWindow", "Array size", nullptr));
        sortBtn->setText(QApplication::translate("MainWindow", "Sort", nullptr));
        printBtn->setText(QApplication::translate("MainWindow", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
