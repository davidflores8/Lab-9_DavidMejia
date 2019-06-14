#include <string>
using std::string;
#include <vector>
using std::vector;
#include "Producto.h"


#ifndef NEGOCIO_H
#define NEGOCIO_H

class Negocio{
    public:
        string nombre;
        string ubicacion;
        int locales;
        vector<Producto*>productos;
        
        Negocio();
        Negocio(string, string, int);

        string getNombre();
        string getUbicacion();
        int getLocales();
        

        vector<Producto*> getProductos();
        void setProductos(vector<Producto*>);
        string toString();
};
#endif