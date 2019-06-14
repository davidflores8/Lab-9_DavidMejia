#include "Persona.h"

Persona::Persona(){


}

Persona::Persona(string name, int identidad, int age){
    nombre=name;
    id=identidad;
    edad=age;
    ganancia=0;
}

string Persona::getNombre(){
    return nombre;
 }

int Persona::getId(){
    return id;
}

int Persona::getEdad(){
    return edad;
}

int Persona::getGanancias(){
    return ganancia;
    
}