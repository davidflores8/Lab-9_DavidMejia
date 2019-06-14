#include "Negocio.h"

Negocio::Negocio(){

}

Negocio::Negocio(string name, string ubic, int locals){
    nombre=name;
    ubicacion=ubic;
    locales=locals;
}

string Negocio::getNombre(){
    return nombre;
}

string Negocio::getUbicacion(){
    return ubicacion;
}

int Negocio::getLocales(){
    return locales;
}

vector<Producto*> Negocio::getProductos(){
    return productos;
}

void Negocio::setProductos(vector<Producto*> products){
    productos=products;
}