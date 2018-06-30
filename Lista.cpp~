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

Lista::~Lista(){

}
Nodo* eliminar(string nombre){


}
void Lista::Agregar(Seleccion* add)
{
	Nodo *temporal;
	Nodo *nuevo; 
	Nodo *anterior;
	nuevo = new Nodo;
	nuevo->selec = add;
	nuevo->siguiente = NULL;
	temporal = start;
	anterior = NULL;
		if (start == NULL) {
				start = nuevo;
				}	
				else{
			while ((temporal != NULL && temporal->selec < add))
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
	while (n != NULL){ 
	cout<<endl;
	cout<<n->selec->getNombre()<<endl;
	cout<<n->selec->getMaximoGoleador()<<endl;
	n = n->siguiente;
	}
}


void Lista::MostrarMaxGole(){
	Nodo* n;
	cout<<" Maximo Goleador ";
	n = start;
	while (n != NULL){ 
	cout<<n->selec->MaximoGoleadores()<<endl;
	n = n->siguiente;
	}
}


void Lista::Borrar(Nodo *x){
    Nodo* temp = x;
    if(start == x){
        start = start->siguiente;
    } else if(start != NULL) {
        Nodo* temp = start;
        while(temp->siguiente != x ) {
            temp = temp->siguiente;
        }
	temp->siguiente;    
    }
    delete x;
}


Nodo* Lista::buscar(string nombre){
	Nodo* n =start;
		while(n->selec->getNombre()!=nombre){
			n =n->siguiente;

	}
return n;
}

