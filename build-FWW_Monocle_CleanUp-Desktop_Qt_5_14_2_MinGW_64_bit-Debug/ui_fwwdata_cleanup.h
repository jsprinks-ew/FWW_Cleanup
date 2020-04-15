/********************************************************************************
** Form generated from reading UI file 'fwwdata_cleanup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FWWDATA_CLEANUP_H
#define UI_FWWDATA_CLEANUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FWWData_Cleanup
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FWWData_Cleanup)
    {
        if (FWWData_Cleanup->objectName().isEmpty())
            FWWData_Cleanup->setObjectName(QString::fromUtf8("FWWData_Cleanup"));
        FWWData_Cleanup->resize(800, 600);
        FWWData_Cleanup->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        centralwidget = new QWidget(FWWData_Cleanup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 781, 71));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        FWWData_Cleanup->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(FWWData_Cleanup);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FWWData_Cleanup->setStatusBar(statusbar);

        retranslateUi(FWWData_Cleanup);

        QMetaObject::connectSlotsByName(FWWData_Cleanup);
    } // setupUi

    void retranslateUi(QMainWindow *FWWData_Cleanup)
    {
        FWWData_Cleanup->setWindowTitle(QCoreApplication::translate("FWWData_Cleanup", "FWWData_Cleanup", nullptr));
        label->setText(QCoreApplication::translate("FWWData_Cleanup", "<html><head/><body><p><span style=\" font-size:18pt;\">FreshWater Watch Data Cleanup Utility</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FWWData_Cleanup: public Ui_FWWData_Cleanup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FWWDATA_CLEANUP_H
