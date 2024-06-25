/********************************************************************************
** Form generated from reading UI file 'formkaryawan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKARYAWAN_H
#define UI_FORMKARYAWAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormKaryawan
{
public:
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QLabel *golonganLabel;
    QComboBox *golonganComboBox;
    QLabel *statusNikahLabel;
    QComboBox *statusNikahComboBox;
    QLabel *jumlahAnakLabel;
    QLabel *masaKerjaLabel;
    QLineEdit *masaKerjaLineEdit;
    QLabel *gajiTotalLabel;
    QLineEdit *gajiTotalLineEdit;
    QLineEdit *jumlahAnakLineEdit;
    QPushButton *pushButton;
    QGroupBox *formGroupBox_2;
    QFormLayout *formLayout_2;
    QLabel *nIKLabel;
    QLineEdit *nIKLineEdit;
    QLabel *namaLabel;
    QLineEdit *namaLineEdit;
    QLabel *telpLabel;
    QLineEdit *telpLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;

    void setupUi(QWidget *FormKaryawan)
    {
        if (FormKaryawan->objectName().isEmpty())
            FormKaryawan->setObjectName("FormKaryawan");
        FormKaryawan->resize(810, 438);
        formGroupBox = new QGroupBox(FormKaryawan);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(410, 30, 341, 181));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        golonganLabel = new QLabel(formGroupBox);
        golonganLabel->setObjectName("golonganLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, golonganLabel);

        golonganComboBox = new QComboBox(formGroupBox);
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->addItem(QString());
        golonganComboBox->setObjectName("golonganComboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, golonganComboBox);

        statusNikahLabel = new QLabel(formGroupBox);
        statusNikahLabel->setObjectName("statusNikahLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, statusNikahLabel);

        statusNikahComboBox = new QComboBox(formGroupBox);
        statusNikahComboBox->addItem(QString());
        statusNikahComboBox->addItem(QString());
        statusNikahComboBox->setObjectName("statusNikahComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, statusNikahComboBox);

        jumlahAnakLabel = new QLabel(formGroupBox);
        jumlahAnakLabel->setObjectName("jumlahAnakLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlahAnakLabel);

        masaKerjaLabel = new QLabel(formGroupBox);
        masaKerjaLabel->setObjectName("masaKerjaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, masaKerjaLabel);

        masaKerjaLineEdit = new QLineEdit(formGroupBox);
        masaKerjaLineEdit->setObjectName("masaKerjaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, masaKerjaLineEdit);

        gajiTotalLabel = new QLabel(formGroupBox);
        gajiTotalLabel->setObjectName("gajiTotalLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, gajiTotalLabel);

        gajiTotalLineEdit = new QLineEdit(formGroupBox);
        gajiTotalLineEdit->setObjectName("gajiTotalLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, gajiTotalLineEdit);

        jumlahAnakLineEdit = new QLineEdit(formGroupBox);
        jumlahAnakLineEdit->setObjectName("jumlahAnakLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlahAnakLineEdit);

        pushButton = new QPushButton(FormKaryawan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 190, 93, 29));
        formGroupBox_2 = new QGroupBox(FormKaryawan);
        formGroupBox_2->setObjectName("formGroupBox_2");
        formGroupBox_2->setGeometry(QRect(40, 30, 341, 141));
        formLayout_2 = new QFormLayout(formGroupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        nIKLabel = new QLabel(formGroupBox_2);
        nIKLabel->setObjectName("nIKLabel");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nIKLabel);

        nIKLineEdit = new QLineEdit(formGroupBox_2);
        nIKLineEdit->setObjectName("nIKLineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nIKLineEdit);

        namaLabel = new QLabel(formGroupBox_2);
        namaLabel->setObjectName("namaLabel");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, namaLabel);

        namaLineEdit = new QLineEdit(formGroupBox_2);
        namaLineEdit->setObjectName("namaLineEdit");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, namaLineEdit);

        telpLabel = new QLabel(formGroupBox_2);
        telpLabel->setObjectName("telpLabel");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, telpLabel);

        telpLineEdit = new QLineEdit(formGroupBox_2);
        telpLineEdit->setObjectName("telpLineEdit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, telpLineEdit);

        alamatLabel = new QLabel(formGroupBox_2);
        alamatLabel->setObjectName("alamatLabel");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formGroupBox_2);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, alamatLineEdit);


        retranslateUi(FormKaryawan);

        QMetaObject::connectSlotsByName(FormKaryawan);
    } // setupUi

    void retranslateUi(QWidget *FormKaryawan)
    {
        FormKaryawan->setWindowTitle(QCoreApplication::translate("FormKaryawan", "Form", nullptr));
        golonganLabel->setText(QCoreApplication::translate("FormKaryawan", "Golongan", nullptr));
        golonganComboBox->setItemText(0, QCoreApplication::translate("FormKaryawan", "I", nullptr));
        golonganComboBox->setItemText(1, QCoreApplication::translate("FormKaryawan", "II", nullptr));
        golonganComboBox->setItemText(2, QCoreApplication::translate("FormKaryawan", "III", nullptr));
        golonganComboBox->setItemText(3, QCoreApplication::translate("FormKaryawan", "IV", nullptr));

        statusNikahLabel->setText(QCoreApplication::translate("FormKaryawan", "Status Nikah", nullptr));
        statusNikahComboBox->setItemText(0, QCoreApplication::translate("FormKaryawan", "Menikah", nullptr));
        statusNikahComboBox->setItemText(1, QCoreApplication::translate("FormKaryawan", "Belum Menikah", nullptr));

        jumlahAnakLabel->setText(QCoreApplication::translate("FormKaryawan", "Jumlah Anak", nullptr));
        masaKerjaLabel->setText(QCoreApplication::translate("FormKaryawan", "Masa Kerja", nullptr));
        gajiTotalLabel->setText(QCoreApplication::translate("FormKaryawan", "Gaji Total", nullptr));
        pushButton->setText(QCoreApplication::translate("FormKaryawan", "Hitung", nullptr));
        nIKLabel->setText(QCoreApplication::translate("FormKaryawan", "NIK", nullptr));
        namaLabel->setText(QCoreApplication::translate("FormKaryawan", "Nama", nullptr));
        telpLabel->setText(QCoreApplication::translate("FormKaryawan", "Telp", nullptr));
        alamatLabel->setText(QCoreApplication::translate("FormKaryawan", "Alamat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormKaryawan: public Ui_FormKaryawan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKARYAWAN_H
