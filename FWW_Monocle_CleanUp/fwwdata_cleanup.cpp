#include "fwwdata_cleanup.h"
#include "ui_fwwdata_cleanup.h"

#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStringList>

QString rawfile;

FWWData_Cleanup::FWWData_Cleanup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FWWData_Cleanup)
{
    ui->setupUi(this);
    connect(ui->rawData, SIGNAL (released()), this, SLOT (rawButton()));
    connect(ui->flagButton, SIGNAL (released()), this, SLOT (flagErrors()));
}

void FWWData_Cleanup::rawButton()
{
    rawfile = QFileDialog::getOpenFileName(this,
    tr("Upload csv"), "C:/Users/jsprinks/FWW_Monocle_CleanUp/FWW_Monocle_CleanUp/data", tr("csv files (*.csv)"));

    ui->file_name->setText(rawfile);

}

void FWWData_Cleanup::flagErrors()
{
    QFile File(rawfile);
    QString line;
    QStringList cols;

    int i;

    if(File.open(QIODevice::ReadOnly))
    {
        QTextStream out(&File);
        i = 0;
        while(!out.atEnd())
        {

            line=out.readLine();
            cols = line.split(",");
            int size = cols.size();

            if (i == 0)
            {
            cols.append("Flagged");
            cols.append("Flag Reason");
            }
            else
            {
            cols.append("-");
            cols.append("-");
            }
            i = i + 1;



            qDebug() << cols.at(105);
        }



    }
}

FWWData_Cleanup::~FWWData_Cleanup()
{
    delete ui;
}

