#include "Negocio.h"

Negocio::Negocio(){

}

Negocio::Negocio(string name, string ubic){
    nombre=name;
    ubicacion=ubic;
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