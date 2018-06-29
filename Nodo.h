#include <iostream>
#include <string>
#include <vector>
#include "Seleccion.h"

using namespace std;

#ifndef NODO_H
#define NODO_H
class Nodo{
	
	public:
		Seleccion* numero; //Numero del objeto
		Nodo* siguiente;
		Nodo(Nodo*);
		Nodo();
		Nodo* getSiguiente();
		void setSiguiente(Nodo*);
		
			

};
#endif