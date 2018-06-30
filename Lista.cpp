#include "Lista.h"
#include "Nodo.h"
#include <string>
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

Lista::Lista(){
start = NULL;
}



void Lista::Agregar(Seleccion* add)
{
	Nodo *temporal;
	Nodo *nuevo; 
	Nodo *anterior;
	nuevo = new Nodo;
	nuevo->numero = add;
	nuevo->siguiente = NULL;
	temporal = start;
	anterior = NULL;
		if (start == NULL) {
				start = nuevo;
				}	
				else{
			while ((temporal != NULL) && (temporal->numero < add))
				{
				anterior = temporal;
				temporal = temporal->siguiente;
				}
				nuevo->siguiente = temporal;
				if (anterior == NULL) 
					start = nuevo;
				else{
					anterior->siguiente = nuevo;
					}
			}
}
			
			
void Lista::Mostrar()
{
	Nodo* n;
	cout<<" Lista de Selecciones:";
	n = start;
	while (n != NULL)
	{ 
	cout<<n->numero->getNombre()<<endl;
	cout<<n->numero->getMaximoGoleador()<<endl;
	n = n->siguiente;
	}
}


void Lista::MostrarMaxGole()
{
	Nodo* n;
	cout<<" Maximo Goleador ";
	n = start;
	while (n != NULL)
	{ 
	cout<<n->numero->MaximoGoleadores()<<endl;
	n = n->siguiente;
	}
}


