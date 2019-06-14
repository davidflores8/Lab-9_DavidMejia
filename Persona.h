#include <string>
using std::string;

#ifndef PERSONA_H
#define PERSONA_H

class Persona{
    public:
    string nombre;
    int id;
    int edad;
    int ganancia;

    Persona();
    Persona(string, int, int);

    string getNombre();
    int getId();
    int getEdad();
    int getGanancias();
    virtual int ganancias()=0;

};

#endif