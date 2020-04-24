#ifndef FWWDATA_CLEANUP_H
#define FWWDATA_CLEANUP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FWWData_Cleanup; }
QT_END_NAMESPACE

class FWWData_Cleanup : public QMainWindow
{
    Q_OBJECT

public:
    FWWData_Cleanup(QWidget *parent = nullptr);
    ~FWWData_Cleanup();

private slots:
    void rawButton();
    void flagErrors();
    void deleteColumns();

private:
    Ui::FWWData_Cleanup *ui;
};
#endif // FWWDATA_CLEANUP_H
