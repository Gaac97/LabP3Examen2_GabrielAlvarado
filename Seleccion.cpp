#include "Seleccion.h"
#include <string>


Seleccion::Seleccion(string Nombre,int PartidosGanados,int Perdidos,int Empatados,int GolAnotados,string MaximoGoleador,int GolesAnotados){
	this->Nombre=Nombre;
	this->PartidosGanados=PartidosGanados;
	this->Perdidos=Perdidos;
	this->Empatados=Empatados;
	this->GolAnotados=GolAnotados;
	this->MaximoGoleador=MaximoGoleador;
	this->GolesAnotados=GolesAnotados;
}
Seleccion::Seleccion(){

}void Seleccion::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string Seleccion::getNombre(){
   return Nombre;
}
void Seleccion::setPartidosGanados(int PartidosGanados){
   this-> PartidosGanados=PartidosGanados;
}
int Seleccion::getPartidosGanados(){
   return PartidosGanados;
}
void Seleccion::setPerdidos(int Perdidos){
   this-> Perdidos=Perdidos;
}
int Seleccion::getPerdidos(){
   return Perdidos;
}
void Seleccion::setEmpatados(int Empatados){
   this-> Empatados=Empatados;
}
int Seleccion::getEmpatados(){
   return Empatados;
}
void Seleccion::setGolAnotados(int GolesAnotados){
   this-> GolesAnotados=GolesAnotados;
}
int Seleccion::getGolAnotados(){
   return GolesAnotados;
}
void Seleccion::setMaximoGoleador(string MaximoGoleador){
   this-> MaximoGoleador=MaximoGoleador;
}
string Seleccion::getMaximoGoleador(){
   return MaximoGoleador;
}
void Seleccion::setGolesAnotados(int GolesAnotados){
   this-> GolesAnotados=GolesAnotados;
}
int Seleccion::getGolesAnotados(){
   return GolesAnotados;
}

string Seleccion::MaximoGoleadores(){
	int cont=0;
	Seleccion* s;
	Seleccion* s2;
	if(s->getMaximoGoleador()>s2->getMaximoGoleador()){
		return s->getMaximoGoleador();
	
	}else{
		return s2->getMaximoGoleador();	
	
	}

}

