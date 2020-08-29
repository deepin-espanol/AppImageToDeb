#include "mainwindow.h"
#include <DMainWindow>
DWIDGET_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    w = new Widget;
    setMinimumSize(420,400);
    setMaximumSize(420,400);
    setCentralWidget(w);

}

MainWindow::~MainWindow()
{

}


