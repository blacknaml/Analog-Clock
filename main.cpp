#include "analogclock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    AnalogClock w;
    w.show();

    return app.exec();
}
