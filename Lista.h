#include "Nodo.h"
#include <iostream>
#include "Seleccion.h"
#include <string>
#ifndef LISTA_H
#define LISTA_H
class Lista
{
public:
	Lista();
	~Lista();
	void Agregar(Seleccion* num);// metodo que agrega 
	void Mostrar();// muestra todos los elementos
	void MostrarMaxGole();//Muestra los goleadores
private:
	Nodo* start; // Inicio de la lista
};
#endif