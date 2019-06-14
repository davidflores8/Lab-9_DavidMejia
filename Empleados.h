#include "Persona.h"

#ifndef EMPLEADOS_H
#define EMPLEADOS_H

class Empleados:public Persona{
    public:
        int horas_trabajo;
        string local;
        int total_ordenes;

        Empleados();
        Empleados(string, int, int, int, string);

        int getHoras_trabajo();
        string getLocal();
        int getTotal_ordenes();
        int ganancias();
        string toString();
};
#endif