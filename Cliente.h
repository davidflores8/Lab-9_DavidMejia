#include "Persona.h"

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente:public Persona{
    public:
        string direccion;
        int telefono;
        int tarjeta;
        int pedidos;
        
        Cliente();
        Cliente(string, int, int, string, int, int);

        string getDireccion();
        int getTelefono();
        int getTarjeta();
        int getPedidos();
        int ganancias();
};
#endif