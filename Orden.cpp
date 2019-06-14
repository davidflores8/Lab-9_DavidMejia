#include "Orden.h"

Orden::Orden(){

}

Orden::Orden(Cliente* client, Negocio* business, Repartidor* delivery_person, Producto* product){
    cliente=client;
    negocio=business;
    repartidor=delivery_person;
    producto=product;
    estado="En Proceso";
}

string Orden::toString(){
    stringstream retorno;
    retorno<<"Cliente: "<<cliente->toString()<<"\nNegocio: "<<negocio->toString()<<"\nRepartidor: "<<repartidor->toString()<<"\n"<<producto->toString()<<"\n"<<"Estado: "<<estado;
    return retorno.str();
}

void Orden::setEstado(string conformacion){
    estado=conformacion;
}
