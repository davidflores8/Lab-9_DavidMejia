#include "Producto.h"
#include <sstream>
using std::stringstream;

Producto::Producto(){

}

Producto::Producto(string name, string type){
    nombre=name;
    tipo=type;
}

string Producto::getNombre(){
    return nombre;
}
string Producto::getTipo(){
    return tipo;
}

string Producto::toString(){
    stringstream retorno;
    retorno<<"\nNombre: "<<nombre<<"\nComestible?: "<<tipo;
    return retorno.str();
}