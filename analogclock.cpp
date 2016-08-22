#include "analogclock.h"
#include "ui_analogclock.h"

AnalogClock::AnalogClock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnalogClock)
{
    ui->setupUi(this);
}

AnalogClock::~AnalogClock()
{
    delete ui;
}
