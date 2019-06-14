#include "Repartidor.h"

Repartidor::Repartidor(){

}

Repartidor::Repartidor(string name, int identidad, int age, string mat, string zone):Persona(name, identidad,age){
    placa=mat;
    zona=zone;
    ordenes=0;
}

string Repartidor::getPlaca(){
    return placa;
}

string Repartidor::getZona(){
    return zona;
}

int Repartidor::getOrdenes(){
    return ordenes;
}

void Repartidor::aumentarOrden(){
    ordenes=ordenes+1;
}

int Repartidor::ganancias(){
    int ganancias=0;
    ganancia=40*ordenes;
    ganancia=ganancias;
    return ganancia;
}

string Repartidor::toString(){
    stringstream retorno;
    ganancias();
    retorno<<"Nombre: "<<nombre<<"\nNumero de identidad: "<<id<<"\n"<<"\nEdad: "<<edad<<"\nPlaca de motocicleta: "<<placa<<
    "\nZona de preferencia: "<<zona<<"\n Total de ordenes: "<<ordenes<<"\nGanancias: "<<ganancia;
    return retorno.str();
}