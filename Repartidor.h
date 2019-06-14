#include "Persona.h"

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor:public Persona{
    public:
        string placa;
        string zona;
        int ordenes;

        Repartidor();
        Repartidor(string, int, int, string, string);

        string getPlaca();
        string getZona();
        int getOrdenes();
        int ganancias();
        string toString();
        void aumentarOrden();


};
#endif