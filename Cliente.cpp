#include "Cliente.h"

Cliente::Cliente(){

}

Cliente::Cliente(string name, int identidad, int age, string adress, int phone, int card):Persona(name, identidad, age){
    direccion=adress;
    telefono=phone;
    tarjeta=card;
    pedidos=0;
}


string Cliente::getDireccion(){
    return direccion;
}

int Cliente::getTelefono(){
    return telefono;
}

int Cliente::getTarjeta(){
    return tarjeta;
}

int Cliente::getPedidos(){
    return pedidos;
}

int Cliente::ganancias(){
    int ganancias=0;
    ganancia=(-100)*pedidos;
    ganancia=ganancias;
    return ganancia;
}