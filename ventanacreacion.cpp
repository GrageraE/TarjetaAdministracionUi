#include "ventanacreacion.h"
#include "ui_ventanacreacion.h"
#include <string>
#include <fstream>
using namespace std;

ventanacreacion::ventanacreacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanacreacion)
{
    ui->setupUi(this);
}

ventanacreacion::~ventanacreacion()
{
    delete ui;
}

void ventanacreacion::on_pushButton_2_clicked()
{
    exit(0);
}

void ventanacreacion::on_pushButton_3_clicked()
{
    ui->editNombre->clear();
    ui->editEdad->clear();
    ui->editPais->clear();
    ui->editProvincia->clear();
    return;
}

void ventanacreacion::on_pushButton_clicked()
{
    QString nombre = ui->editNombre->text();
    QString pais = ui->editPais->text();
    QString provincia = ui->editProvincia->text();
    QString edad = ui->editEdad->text();
    int edadInt = edad.toInt();
    string nombreStr = nombre.toStdString();
    string paisStr = pais.toStdString();
    string provinciaStr = provincia.toStdString();
    ofstream crear;
    string nombreArchivo = nombreStr + paisStr;
    nombreArchivo = nombreArchivo + ".txt";
    crear.open(nombreArchivo, ios::out);
    crear <<" Nombre: " <<nombreStr <<endl;
    crear <<" Edad: " <<edadInt <<endl;
    crear <<" Lugar de residencia: " <<provinciaStr <<", " <<paisStr <<endl;
    if(crear.fail())
    {
        system("echo Algo ha fallado");
    }
    else {
        system("echo Se ha creado correctamente");
    }
    crear.close();
    return;
}
