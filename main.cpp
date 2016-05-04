#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("File Manager");
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
