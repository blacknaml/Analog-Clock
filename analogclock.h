#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QMainWindow>

namespace Ui {
class AnalogClock;
}

class AnalogClock : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnalogClock(QWidget *parent = 0);
    ~AnalogClock();

private:
    Ui::AnalogClock *ui;
};

#endif // ANALOGCLOCK_H
