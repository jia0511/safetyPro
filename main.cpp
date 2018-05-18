#include "security.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     security w;
     w.show();

      return a.exec();
}
