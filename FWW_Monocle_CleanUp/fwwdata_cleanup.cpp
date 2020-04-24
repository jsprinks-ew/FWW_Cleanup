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
    connect(ui->columnbutton, SIGNAL (released()), this, SLOT (deleteColumns()));

    ui->nitrate_num->setPalette(Qt::red);
    ui->phos_num->setPalette(Qt::red);
    ui->loc_num->setPalette(Qt::red);
    ui->turb_num->setPalette(Qt::red);
    ui->test_num->setPalette(Qt::red);
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

    QString output = ui->file_name->text();
    QFile Output(output.replace(".csv","_flagged.csv"));

    int i;
    int geopos = 0;
    int nitratepos = 0;
    int phosphatepos = 0;
    int turbpos = 0;
    int notespos = 0;
    int colourpos = 0;
    int datasize = 0;
    int flagpos = 0;
    int nitratetotal = 0;
    int geototal = 0;
    int phosphatetotal = 0;
    int turbtotal = 0;
    int notestotal = 0;

    if(File.open(QIODevice::ReadOnly))
    {
        QTextStream out(&File);
        i = 0;
        while(!out.atEnd())
        {

            line=out.readLine();
            cols = line.split(",");

            if (i == 0)
            {
            cols.append("Flagged");
            cols.append("Flag Reason");
            geopos = cols.indexOf("Geolocation (Latitude | Longitude)");
            nitratepos = cols.indexOf("Nitrate");
            phosphatepos = cols.indexOf("Phosphate");
            turbpos = cols.indexOf("Water Quality â€“ Secchi Tube (Turbidity).");
            notespos = cols.indexOf("Notes");
            colourpos = cols.indexOf("Estimate the water colour");
            flagpos = cols.indexOf("Flagged");
            datasize = cols.size();
            }

            else
            {
                if (cols.at(nitratepos) == "-" && cols.size() < datasize)
                {
                    cols.append("Y");
                    cols.append("nitrate");
                    nitratetotal = nitratetotal+1;
                    ui->nitrate_num->display(nitratetotal);

                }
                if (cols.at(phosphatepos) == "-")
                {
                    if (cols.size() < datasize)
                    {
                        cols.append("Y");
                        cols.append("phosphate");
                        phosphatetotal = phosphatetotal+1;
                        ui->phos_num->display(phosphatetotal);
                    }
                    else
                    {
                        cols[flagpos+1] = cols[flagpos+1] + "-phosphate";
                        phosphatetotal = phosphatetotal+1;
                        ui->phos_num->display(phosphatetotal);
                    }
                }
                if (cols.at(geopos) == "-" or cols.at(geopos) == "0 | 0")
                {
                    if (cols.size() < datasize)
                    {
                        cols.append("Y");
                        cols.append("geolocation");
                        geototal = geototal+1;
                        ui->loc_num->display(geototal);
                    }
                    else
                    {
                        cols[flagpos+1] = cols[flagpos+1] + "-geolocation";
                        geototal = geototal+1;
                        ui->loc_num->display(geototal);
                    }
                }
                if (cols.at(notespos).contains("test") or cols.at(notespos).contains("Test"))
                {
                    if (cols.size() < datasize)
                    {
                        cols.append("Y");
                        cols.append("test");
                        notestotal = notestotal+1;
                        ui->test_num->display(notestotal);
                    }
                    else
                    {
                        cols[flagpos+1] = cols[flagpos+1] + "-test";
                        notestotal = notestotal+1;
                        ui->test_num->display(notestotal);
                    }
                }
                if (cols.at(colourpos) == "-" or cols.at(colourpos) == "Colourless")
                {
                    QString turbval;
                    if (cols.at(turbpos).contains("<") or cols.at(turbpos).contains(">"))
                    {
                       turbval = cols.at(turbpos);
                       turbval.remove("<");
                       turbval.remove(">");
                    }
                    int turbvalint = turbval.toInt();
                    if (turbvalint < 40)
                    {
                        if(cols.size() < datasize)
                        {
                            cols.append("Y");
                            cols.append("turbidity");
                            turbtotal=turbtotal+1;
                            ui->turb_num->display(turbtotal);
                        }
                        else
                        {
                            cols[flagpos+1] = cols[flagpos+1] + "-turbidity";
                            turbtotal=turbtotal+1;
                            ui->turb_num->display(turbtotal);
                        }
                    }

                }
            }


            i = i + 1;

            Output.open(QIODevice::Append | QIODevice::Text);
            QTextStream stream(&Output);
            stream.setCodec("Windows-1250");
            QString str = cols.join(",");
            stream << str << "\n";
            }

        }
            qDebug() << geopos;
            qDebug() << nitratepos;
            qDebug() << phosphatepos;
            qDebug() << turbpos;
            qDebug() << notespos;
            qDebug() << colourpos;
            qDebug() << datasize;

            Output.close();
            File.close();
}

void FWWData_Cleanup::deleteColumns()
{
    QString input = ui->file_name->text();
    QFile Input(input.replace(".csv","_flagged.csv"));
    QStringList rows;
    QStringList check;


}


FWWData_Cleanup::~FWWData_Cleanup()
{
    delete ui;
}

