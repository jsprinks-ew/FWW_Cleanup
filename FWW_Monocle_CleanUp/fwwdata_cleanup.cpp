#include "fwwdata_cleanup.h"
#include "ui_fwwdata_cleanup.h"

#include <QFileDialog>
#include <QFile>

QString rawfile;

FWWData_Cleanup::FWWData_Cleanup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FWWData_Cleanup)
{
    ui->setupUi(this);
    connect(ui->rawData, SIGNAL (released()), this, SLOT (rawButton()));
}

void FWWData_Cleanup::rawButton()
{
    rawfile = QFileDialog::getOpenFileName(this,
    tr("Upload csv"), "C:/Users/jsprinks/FWW_Monocle_CleanUp/FWW_Monocle_CleanUp/data", tr("csv files (*.csv)"));

    ui->file_name->setText(rawfile);
}

FWWData_Cleanup::~FWWData_Cleanup()
{
    delete ui;
}

