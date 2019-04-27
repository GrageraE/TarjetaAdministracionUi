#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ventanacreacion.h"
#include "ventanaeliminacion.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_clicked()
{
    ventanacreacion ventanacreacion;
    ventanacreacion.setModal(true);
    ventanacreacion.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    ventanaEliminacion ventanaeliminacion;
    ventanaeliminacion.setModal(true);
    ventanaeliminacion.exec();
}
