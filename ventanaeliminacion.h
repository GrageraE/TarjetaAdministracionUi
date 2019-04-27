#ifndef VENTANAELIMINACION_H
#define VENTANAELIMINACION_H

#include <QDialog>

namespace Ui {
class ventanaEliminacion;
}

class ventanaEliminacion : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaEliminacion(QWidget *parent = nullptr);
    ~ventanaEliminacion();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ventanaEliminacion *ui;
};

#endif // VENTANAELIMINACION_H
