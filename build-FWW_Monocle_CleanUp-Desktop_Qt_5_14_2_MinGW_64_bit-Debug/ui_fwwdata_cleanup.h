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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FWWData_Cleanup
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *rawData;
    QLabel *file_name;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FWWData_Cleanup)
    {
        if (FWWData_Cleanup->objectName().isEmpty())
            FWWData_Cleanup->setObjectName(QString::fromUtf8("FWWData_Cleanup"));
        FWWData_Cleanup->resize(800, 600);
        FWWData_Cleanup->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);"));
        centralwidget = new QWidget(FWWData_Cleanup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 581, 101));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 91, 101));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 10, 131, 101));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 781, 111));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 781, 20));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 130, 781, 21));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);
        rawData = new QPushButton(centralwidget);
        rawData->setObjectName(QString::fromUtf8("rawData"));
        rawData->setGeometry(QRect(10, 160, 181, 51));
        rawData->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));
        file_name = new QLabel(centralwidget);
        file_name->setObjectName(QString::fromUtf8("file_name"));
        file_name->setGeometry(QRect(210, 160, 581, 51));
        file_name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        file_name->setAlignment(Qt::AlignCenter);
        FWWData_Cleanup->setCentralWidget(centralwidget);
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        rawData->raise();
        file_name->raise();
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
        label_2->setText(QCoreApplication::translate("FWWData_Cleanup", "<html><head/><body><p><img src=\":/images/Images/fresh.jpg\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("FWWData_Cleanup", "<html><head/><body><p><img src=\":/images/Images/monocle.png\"/></p></body></html>", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("FWWData_Cleanup", "Created by James Sprinks, jsprinks@earthwatch.org.uk", nullptr));
        label_6->setText(QCoreApplication::translate("FWWData_Cleanup", "Program that re-formats and anonamizes FreshWater Watch csv data, suitable for uploading to GeoServer for data sharing with the MONOCLE consortium.", nullptr));
        rawData->setText(QCoreApplication::translate("FWWData_Cleanup", "Upload raw datafile (.csv)", nullptr));
        file_name->setText(QCoreApplication::translate("FWWData_Cleanup", "file not uploaded", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FWWData_Cleanup: public Ui_FWWData_Cleanup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FWWDATA_CLEANUP_H
