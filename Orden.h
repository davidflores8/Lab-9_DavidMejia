#include "Cliente.h"
#include "Negocio.h"
#include "Repartidor.h"
#include "Producto.h"
#include <string>
using std::string;
#include <sstream>
using std::stringstream;

#ifndef ORDEN_H
#define ORDEN_H

class Orden{
    public:
        Cliente* cliente;
        Negocio* negocio;
        Repartidor* repartidor;
        Producto* producto;
        string estado;

        Orden();
        Orden(Cliente*,Negocio*,Repartidor*,Producto*);
        string toString();
        void setEstado(string);
        

};
#endif