#include "guipraktikum.h"
#include "ui_guipraktikum.h"
#include "QString"

guiPraktikum::guiPraktikum(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::guiPraktikum)
{
    ui->setupUi(this);
    myForm = new FormKaryawan;
}

guiPraktikum::~guiPraktikum()
{
    delete ui;
}

void guiPraktikum::on_pushButton_clicked()
{
    myForm->show();
}

