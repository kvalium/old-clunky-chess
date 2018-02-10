#include <QApplication>
#include <QWidget>
#include "echiquier.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    echiquier ech;
    ech.show();

    return app.exec();
}
