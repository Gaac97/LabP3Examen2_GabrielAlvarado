#include "Nodo.h"

Nodo::Nodo(Nodo* siguiente){
	this->siguiente=siguiente;
}
Nodo::Nodo(){

}void Nodo::setSiguiente(Nodo* siguiente){
   this-> siguiente=siguiente;
}
Nodo* Nodo::getSiguiente(){
   return siguiente;
}
