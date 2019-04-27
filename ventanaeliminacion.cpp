#include "ventanaeliminacion.h"
#include "ui_ventanaeliminacion.h"
#include <string>
#include <fstream>
using namespace std;

ventanaEliminacion::ventanaEliminacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanaEliminacion)
{
    ui->setupUi(this);
}

ventanaEliminacion::~ventanaEliminacion()
{
    delete ui;
}

void ventanaEliminacion::on_pushButton_2_clicked()
{
    exit(0);
}

void ventanaEliminacion::on_pushButton_clicked()
{
    QString nombre = ui->editNombre->text();
    QString pais = ui->editPais->text();
    string nombreStr = nombre.toStdString();
    string paisStr = pais.toStdString();
    ifstream comprobacion;
    string nombreArchivo = nombreStr + paisStr;
    nombreArchivo = nombreArchivo + ".txt";
    comprobacion.open(nombreArchivo, ios::in);
    if(comprobacion.fail())
    {
        system("echo No se ha encontrado el archivo");
        return;
    }
    system("echo Se ha encontrado el archivo");
    comprobacion.close();
    remove(nombreArchivo.c_str());
}
