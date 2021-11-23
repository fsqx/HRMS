#include "hrmsmainwindow.h"
#include "ui_hrmsmainwindow.h"

HRMSMainWindow::HRMSMainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HRMSMainWindow)
{
    ui->setupUi(this);
}

HRMSMainWindow::~HRMSMainWindow()
{
    delete ui;
}

