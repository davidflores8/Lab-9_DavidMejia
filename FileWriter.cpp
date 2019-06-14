#include "FileWriter.h"
#include <iostream>
using std::endl;

FileWriter::FileWriter(){
    int cont=0;
}

void FileWriter::fileOpen(char* cadena){
    file.open("factura.txt", std::ios::app);
}

void FileWriter::write(Orden* orden){
    file<<"Factura: "<<cont<<endl;
    cont=cont+1;
    file<<"-----------------------"<<endl;
    file<<orden->toString()<<endl;
}

void FileWriter::fileClose(){
    file.close();
}
