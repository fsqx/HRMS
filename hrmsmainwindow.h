#ifndef HRMSMAINWINDOW_H
#define HRMSMAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HRMSMainWindow; }
QT_END_NAMESPACE

class HRMSMainWindow : public QWidget
{
    Q_OBJECT

public:
    HRMSMainWindow(QWidget *parent = nullptr);
    ~HRMSMainWindow();

private:
    Ui::HRMSMainWindow *ui;
};
#endif // HRMSMAINWINDOW_H
