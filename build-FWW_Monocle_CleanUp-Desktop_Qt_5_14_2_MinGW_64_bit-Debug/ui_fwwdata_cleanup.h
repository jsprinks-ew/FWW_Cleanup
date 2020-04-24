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
#include <QtWidgets/QLCDNumber>
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
    QLabel *nitrate_dis;
    QPushButton *flagButton;
    QLabel *phos_dis;
    QLabel *geo_dis;
    QLabel *turb_dis;
    QLabel *notes_dis;
    QLCDNumber *nitrate_num;
    QLCDNumber *phos_num;
    QLCDNumber *loc_num;
    QLCDNumber *turb_num;
    QLCDNumber *test_num;
    QPushButton *columnbutton;
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
        nitrate_dis = new QLabel(centralwidget);
        nitrate_dis->setObjectName(QString::fromUtf8("nitrate_dis"));
        nitrate_dis->setGeometry(QRect(210, 220, 101, 21));
        nitrate_dis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nitrate_dis->setAlignment(Qt::AlignCenter);
        flagButton = new QPushButton(centralwidget);
        flagButton->setObjectName(QString::fromUtf8("flagButton"));
        flagButton->setGeometry(QRect(10, 220, 181, 51));
        flagButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        phos_dis = new QLabel(centralwidget);
        phos_dis->setObjectName(QString::fromUtf8("phos_dis"));
        phos_dis->setGeometry(QRect(330, 220, 101, 21));
        phos_dis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        phos_dis->setAlignment(Qt::AlignCenter);
        geo_dis = new QLabel(centralwidget);
        geo_dis->setObjectName(QString::fromUtf8("geo_dis"));
        geo_dis->setGeometry(QRect(450, 220, 101, 21));
        geo_dis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        geo_dis->setAlignment(Qt::AlignCenter);
        turb_dis = new QLabel(centralwidget);
        turb_dis->setObjectName(QString::fromUtf8("turb_dis"));
        turb_dis->setGeometry(QRect(570, 220, 101, 21));
        turb_dis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        turb_dis->setAlignment(Qt::AlignCenter);
        notes_dis = new QLabel(centralwidget);
        notes_dis->setObjectName(QString::fromUtf8("notes_dis"));
        notes_dis->setGeometry(QRect(690, 220, 101, 21));
        notes_dis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        notes_dis->setAlignment(Qt::AlignCenter);
        nitrate_num = new QLCDNumber(centralwidget);
        nitrate_num->setObjectName(QString::fromUtf8("nitrate_num"));
        nitrate_num->setGeometry(QRect(210, 250, 101, 23));
        nitrate_num->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        phos_num = new QLCDNumber(centralwidget);
        phos_num->setObjectName(QString::fromUtf8("phos_num"));
        phos_num->setGeometry(QRect(330, 250, 101, 23));
        phos_num->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        loc_num = new QLCDNumber(centralwidget);
        loc_num->setObjectName(QString::fromUtf8("loc_num"));
        loc_num->setGeometry(QRect(450, 250, 101, 23));
        loc_num->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        turb_num = new QLCDNumber(centralwidget);
        turb_num->setObjectName(QString::fromUtf8("turb_num"));
        turb_num->setGeometry(QRect(570, 250, 101, 23));
        turb_num->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        test_num = new QLCDNumber(centralwidget);
        test_num->setObjectName(QString::fromUtf8("test_num"));
        test_num->setGeometry(QRect(690, 250, 101, 23));
        test_num->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        columnbutton = new QPushButton(centralwidget);
        columnbutton->setObjectName(QString::fromUtf8("columnbutton"));
        columnbutton->setGeometry(QRect(10, 280, 181, 51));
        columnbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"background-color: rgb(255, 85, 0);"));
        FWWData_Cleanup->setCentralWidget(centralwidget);
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        rawData->raise();
        file_name->raise();
        nitrate_dis->raise();
        flagButton->raise();
        phos_dis->raise();
        geo_dis->raise();
        turb_dis->raise();
        notes_dis->raise();
        nitrate_num->raise();
        phos_num->raise();
        loc_num->raise();
        turb_num->raise();
        test_num->raise();
        columnbutton->raise();
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
        nitrate_dis->setText(QCoreApplication::translate("FWWData_Cleanup", "Nitrate issues:", nullptr));
        flagButton->setText(QCoreApplication::translate("FWWData_Cleanup", "Flag data issues", nullptr));
        phos_dis->setText(QCoreApplication::translate("FWWData_Cleanup", "Phosphate issues:", nullptr));
        geo_dis->setText(QCoreApplication::translate("FWWData_Cleanup", "Location issues:", nullptr));
        turb_dis->setText(QCoreApplication::translate("FWWData_Cleanup", "Turbidity issues:", nullptr));
        notes_dis->setText(QCoreApplication::translate("FWWData_Cleanup", "Test data:", nullptr));
        columnbutton->setText(QCoreApplication::translate("FWWData_Cleanup", "Remove empty columns", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FWWData_Cleanup: public Ui_FWWData_Cleanup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FWWDATA_CLEANUP_H
