#include "Producto.h"

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