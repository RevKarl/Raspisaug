#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>
#include <QPushButton>
#include <QApplication>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

Click::Click(QWidget *parent)
    : QWidget(parent)
{
  QPushButton *quit = new QPushButton("Quit", this);
  quit->setGeometry(50, 40, 75, 30);

  connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

#endif // MAINWINDOW_H
