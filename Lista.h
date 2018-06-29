#include "Nodo.h"
#include <iostream>
#include "Seleccion.h"
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
	void Borrar(Seleccion* num);// elimina de la lista
private:
	Nodo* inicio; // Muestra el inicio de la lista
};
#endif