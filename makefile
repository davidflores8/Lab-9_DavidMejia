main: main.o Persona.o Cliente.o Repartidor.o Empleados.o Negocio.o Producto.o Orden.o FileWriter.cpp
	g++ main.o Persona.o Cliente.o Repartidor.o Empleados.o Negocio.o Producto.o Orden.o FileWriter.cpp -o run

main.o: main.cpp	
	g++ -c main.cpp

Persona.o: Persona.cpp Cliente.cpp Repartidor.cpp Empleados.cpp	
	g++ -c Persona.cpp Cliente.cpp Repartidor.cpp Empleados.cpp

Negocio.o: Negocio.cpp	Producto.cpp
	g++ -c Negocio.cpp  Producto.cpp

Producto.o: Producto.cpp	
	g++ -c Producto.cpp

Orden.o: Orden.cpp
	g++ -c Orden.cpp

FileWriter.o: FileWriter.cpp
	g++ -c FileWriter.cpp