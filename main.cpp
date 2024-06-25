#include "guipraktikum.h"

#include <QApplication>
#include <karyawan.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guiPraktikum g;
    g.show();


    /*
    QSqlDatabase konekDB = QSqlDatabase::addDatabase("QODBC");
    konekDB.setDatabaseName("dsn_penggajian");
    konekDB.setUserName("root");
    konekDB.setPassword("");

    if (!konekDB.open())
    {
        qDebug()<<konekDB.lastError().text();
        return false;
    }

    QSqlQuery sql(konekDB);


    sql.prepare("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
                "VALUE(:nik,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:gaji)");
        sql.bindValue(":nik","100555");
        sql.bindValue(":nama","Auliya");
        sql.bindValue(":alamat","Banjarmasin");
        sql.bindValue(":telp","083817224314");
        sql.bindValue(":golongan","III");
        sql.bindValue(":status","Menikah");
        sql.bindValue(":anak","2");
        sql.bindValue(":masa","10");
        sql.bindValue(":gaji","10000000");

        if (sql.exec()){
            qDebug()<<"Data Berhasil Disimpan";
        }else{
            qDebug()<<sql.lastError().text();
        }



        if (!sql.exec("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
                  "VALUE('100555','Ali','JKT','09090','IV','Menikah','2','10','80000000')")){
            qDebug()<<sql.lastError().text();
            return false;
        }else{
            qDebug()<<"Data Berhasil Disimpan";
        }
    */



    // karyawan k;
    // k.setNIK("2210010620");
    // k.setNAMA("Fitriya Auliya");
    // k.setALAMAT("Sungai Andai");
    // k.setTELP("0878224314");
    // k.setGolongan("I");
    // k.setStatusNikah("Menikah");
    // k.setJumlahAnak(1);
    // k.setMasaKerja(3);
    // qDebug()<<"NIK "<<k.getNIK()<<"\n ";
    // qDebug()<<"NAMA "<<k.getNAMA()<<"\n ";
    // qDebug()<<"ALAMAT "<<k.getALAMAT()<<"\n ";
    // qDebug()<<"TELP "<<k.getTELP()<<"\n ";
    // qDebug()<<"GAJI POKOK "<<k.getTunjGolongan()<<"\n ";
    // qDebug()<<"TUNJ. STATUS "<<k.getTunjNikah()<<"\n ";
    // qDebug()<<"TUNJ. ANAK "<<k.getTunjAnak()<<"\n ";
    // qDebug()<<"TUNJ. MASA KERJA "<<k.getTunjMasaKerja()<<"\n ";
    // qDebug()<<"GAJI TOTAL "<<k.getGajiTotal()<<"\n ";
    return a.exec();
}
