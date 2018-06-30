#include <iostream>
#include <string>
#include "Seleccion.h"
#include "Nodo.h"
#include "Lista.h"
using namespace std;

int main( )
{
Seleccion* num;
int opc;
char resp='s';
Lista ListSelec;

	while(resp=='s'||resp=='S'){
	cout<< "Lista de numeros"<<endl;
	cout<< "1. Agregar"<<endl;
	cout<< "2. Mostrar Lista"<<endl;
	cout<< "3. Eliminar"<<endl;
	cout<< "Opcion ";
	cin>>opc;
	if(opc==1){
		char resp ='s';
	
		string nombre;
		int partidosGanados;
		int perdidos;
		int empatados;
		int golAnotados;
		string nombreGoleador;
		int golesAnotados;	
	
		cout<<"Ingrese nombre de la seleccion"<<endl;
		cin>>nombre;
		
		cout<<"Ingrese partidos ganados"<<endl;
		cin>>partidosGanados;
		cout<<"Ingrese partidos perdidos"<<endl;
		cin>>perdidos;
		cout<<"Ingrese partidos empatados"<<endl;
		cin>>empatados;
		cout<<"Ingrese goles anotados"<<endl;
		cin>>golAnotados;		
		cout<<"Ingrese el maximo goleador"<<endl;
		cin>>nombreGoleador;
		cout<<"Ingrese goles Anotados"<<endl;
		cin>>golesAnotados;		
		
		Seleccion* s = new Seleccion();
		s = new Seleccion(nombre,partidosGanados,perdidos,empatados,golesAnotados,nombreGoleador,golesAnotados);		
		ListSelec.Agregar(s);
	}
	
	

	if(opc==2){
		int op2;
		cout<<"1.Listar Seleccion"<<endl;
		cout<<"2.Listar Maximos Goleadores"<<endl;
		cout<<"3.Listar Selecciones con mas ganes"<<endl;
		cout<<"4.Listar Selecciones con mas goles"<<endl;
		cin>>op2;	
		if(op2==1){
			cout<<endl;
			ListSelec.Mostrar();
			cout<<endl;
		}
		if(op2==2){
		ListSelec.MostrarMaxGole();
		
		}
	
	}
	if( opc==3){
		string nombre;
		cout<<"Ingrese el nombre de la seleccion a eliminar"<<endl;
		cin>>nombre;
		Nodo* temp = ListSelec.buscar(nombre);
		ListSelec.Borrar(temp);
	}
		
		cout<<"Desea continuar s/n"<<endl;
		cin>>resp;
	 }
	return 0;
}


