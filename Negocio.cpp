#include "Negocio.h"
#include <sstream>
using std::stringstream;

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

string Negocio::toString(){
    stringstream retorno;
    retorno<<"Nombre: "<<nombre<<"\nUbicacion: "<<ubicacion<<"\nCantidad de locales: "<<locales;
    for (int i = 0; i <productos.size(); i++)
    {
        retorno<<productos[i]->toString()<<"\n";
        retorno<<"\n";
    }
    return retorno.str();
}