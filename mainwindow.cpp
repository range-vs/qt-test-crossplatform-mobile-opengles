#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel* label = this->findChild<QLabel*>("label");
    QString message("<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Привет, ");
#if defined(Q_OS_ANDROID)
    message += "Android";
#elif defined(Q_OS_IOS)
    message += "iOS";
#endif
    message += " & QT!</span></p></body></html>";
    label->setText(message);
}

MainWindow::~MainWindow()
{
    delete ui;
}
