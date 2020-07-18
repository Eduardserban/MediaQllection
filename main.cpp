#include "vista/mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file("../ProgettoOOP/style.css");
    file.open(QFile::ReadOnly);
    QString style = QLatin1String(file.readAll());

    a.setStyleSheet(style);
    file.close();

    MainWindow w;
    w.setObjectName("window");
    w.setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
    w.show();

    return a.exec();
}
