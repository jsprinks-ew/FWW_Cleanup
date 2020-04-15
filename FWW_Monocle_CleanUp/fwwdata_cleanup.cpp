#include "fwwdata_cleanup.h"
#include "ui_fwwdata_cleanup.h"

FWWData_Cleanup::FWWData_Cleanup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FWWData_Cleanup)
{
    ui->setupUi(this);
}

FWWData_Cleanup::~FWWData_Cleanup()
{
    delete ui;
}

