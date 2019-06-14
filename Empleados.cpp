#include "Empleados.h"

Empleados::Empleados(){

}

Empleados::Empleados(string name, int identidad, int age, int hours, string new_local):Persona(name, identidad, age){
    horas_trabajo=hours;
    local=new_local;
    total_ordenes=0;
}


int Empleados::getHoras_trabajo(){
    return horas_trabajo;
}
string Empleados::getLocal(){
    return local;
}

int Empleados::getTotal_ordenes(){
    return total_ordenes;
}

int Empleados::ganancias(){
    int ganancias=0;
    ganancias=30*total_ordenes;
    ganancia=ganancias;
    return ganancia;
}

string Empleados::toString(){
    stringstream retorno;
    retorno<<"Nombre: "<<nombre<<"\nNumero de identidad: "<<id<<"\n"<<"\nEdad: "<<edad<<"\nHoras de trabajo: "<<horas_trabajo<<
    "\nLocal de preferencia: "<<local<<"\n Total de ordenes: "<<total_ordenes;
    return retorno.str();
}

