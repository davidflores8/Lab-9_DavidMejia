#include "Persona.h"
#include "Cliente.h"
#include "Empleados.h"
#include "Repartidor.h"
#include "Negocio.h"
#include "Producto.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main(){
    vector<Cliente*> clientes;
    vector<Repartidor*> repartidores;
    vector<Empleados*> empleados;
    vector<Negocio*> negocios;
    int opcion=1;
    while(opcion>0 && opcion<4){
        cout<<"-- Menu principal -- "<<endl;
        cout<<"1. Crear persona\n2. Crear Negocio"<<endl;
        cout<<"3. Listar personas\n4. Listar Negocios\n5. Salir"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:{
                string name;
                int id,age;
                int tipo;
                cout<<"Ingrese el nombre: "<<endl;
                cin>>name;
                cout<<"Ingrese la su identidad: "<<endl;
                cin>>id;
                cout<<"Ingrese su edad: "<<endl;
                cin>>age;
                cout<<"Que tipo de persona es?\n Seleccione una opcion: "<<endl;
                cout<<"1. Cliente\n 2. Repartidor\n3. Empleado"<<endl;
                cin>>tipo;
                switch(tipo){
                    case 1:{
                        string direccion;
                        int telefono;
                        int tarjeta; 
                        cout<<"Ingrese la direccion de su casa: "<<endl;
                        cin>>direccion;
                        cout<<"Ingrese su numero de telefono: "<<endl;
                        cin>>telefono;
                        cout<<"Ingrese su numero de tarjeta: "<<endl;
                        cin>>tarjeta;
                        Cliente* cliente;
                        cliente=new Cliente(name,id,age,direccion,tarjeta,tarjeta);
                        cout<<"Cliente agregado exitosamente :)"<<endl;
                        clientes.push_back(cliente);
                        cout<<" "<<endl;
                    }
                    break;
                    case 2:{
                            string placa;
                            string zona;
                            int ordenes;
                            cout<<"Ingrese la placa de su motocicleta: "<<endl;
                            cin>>placa;
                            cout<<"Ingrese la zona de preferencia: "<<endl;
                            cin>>zona;
                            Repartidor* repartidor=new Repartidor(name, id, age,placa,zona);
                            repartidores.push_back(repartidor);
                            cout<<"Repartidor agregado exitosamente :)"<<endl;
                            cout<<" "<<endl;
                    }
                    break;
                    case 3:{
                            int horas_trabajo;
                            string local;
                            cout<<"Ingrese las horas de trabajo: "<<endl;
                            cin>>horas_trabajo;
                            cout<<"Ingrese el local de trabajo: "<<endl;
                            cin>>local;
                            Empleados* empleado;
                            empleado=new Empleados(name, id, age,horas_trabajo,local);
                            empleados.push_back(empleado);
                            cout<<"Empleado agregado exitosamente :)"<<endl;
                            cout<<" "<<endl;
                    }
                    break;
                }
            }
            break;
            case 2:{
                    string nombre;
                    string ubicacion;
                    int locales;
                    cout<<"Ingrese el nombre de su negocio: "<<endl;
                    cin>>nombre;
                    cout<<"Ingrese la ubicacion de su negocio: "<<endl;
                    cin>>ubicacion;
                    cout<<"Ingrese la cantidad de locales de su negocio: "<<endl;
                    cin>>locales;
                    Negocio* negocio;
                    negocio=new Negocio(nombre,ubicacion,locales);
                    int productos=1;
                    vector<Producto* >products;
                    while(productos==1){
                        string name="";
                        string type="";
                        cout<<"Ingrese el nombre del producto: "<<endl;
                        cin>>name;
                        cout<<"Es comestible? [Si / No]: "<<endl;
                        cin>>type;
                        products.push_back(new Producto(name,type));
                        cout<<"Desea continuar agregando productos?\n1. Si\n2. No"<<endl;
                        cin>>productos;
                    }
                    negocio->setProductos(products);
                    negocios.push_back(negocio);
                    cout<<"Empresa agregada exitosamente :)"<<endl;
                    cout<<" "<<endl;
            }
            break;
        }
    }


    return 0;
}