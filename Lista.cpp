#include "Lista.h"
#include "Nodo.h"
#include <string>
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

Lista::Lista()
{
inicio = NULL;
}

//Destructor de la clase
Lista::~Lista()
{
	Nodo *temp, *anterior;
	temp = inicio;
	while (temp != NULL)
	{ 
	anterior = temp;
	temp = temp->siguiente;
	delete anterior;
	}
}

void Lista::Agregar(Seleccion* num)
{
	Nodo *temp, *nuevo, *anterior;
	nuevo = new Nodo;
	nuevo->numero = num;
	nuevo->siguiente = NULL;
	temp = inicio;
	anterior = NULL;// 
		if (inicio == NULL) 
			inicio = nuevo;	
			else
			{
			while ((temp != NULL) && (temp->numero < num))
				{
				anterior = temp;
				temp = temp->siguiente;
				}
				nuevo->siguiente = temp;
				if (anterior == NULL) 
					inicio = nuevo;
				else
				anterior->siguiente = nuevo;
			}
}
			
			
void Lista::Mostrar()
{
	Nodo* n;
	cout<<" Lista de Selecciones:";
	n = inicio;
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
	n = inicio;
	while (n != NULL)
	{ 
	cout<<n->numero->MaximoGoleadores()<<endl;
	n = n->siguiente;
	}
}
// Elimina nodos
void Lista::Borrar(Seleccion* num)
{ 
	Nodo* nodo, *anterior;
	nodo = inicio;
	anterior = NULL;
	while ((nodo != NULL) && (nodo->numero != num))
	{ 
		anterior = nodo;
		nodo = nodo->siguiente;
	}
	if(nodo == NULL)
		cout<<"La lista esta vacia"<<endl;
	else
	{
		if(nodo == inicio)// se va a borrar el primer nodo
			inicio = inicio->siguiente;
				else 
				anterior->siguiente = nodo->siguiente;
				delete nodo;
	}		
}
