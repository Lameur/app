#include <QApplication>
#include <QLayout>
#include <QMainWindow>
#include <QPushButton>
#include <QToolBar>
#include <qobject.h>
#include <qpushbutton.h>
#include <qtoolbar.h>
#include <qwidget.h>

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  QMainWindow *mainWindow = new QMainWindow();

  mainWindow->setWindowTitle("Qt C++ Application");

  QPushButton *button = new QPushButton("Hello World", mainWindow);
  QObject::connect(button, &QPushButton::clicked,
                   []() { qInfo() << "Hello World"; });

  mainWindow->show();
  return app.exec();
}