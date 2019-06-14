#include <string>
using std::string;

#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto{
    public:
        string nombre;
        string tipo;

        Producto();
        Producto(string, string);

        string getNombre();
        string getTipo();
        string toString();

};
#endif