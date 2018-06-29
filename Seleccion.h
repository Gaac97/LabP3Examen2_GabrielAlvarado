#include <iostream>
#include <string>
#include <vector>
#include <string>


using namespace std;

#ifndef SELECCION_H
#define SELECCION_H
class Seleccion{
	protected:
		string Nombre;
		int PartidosGanados;
		int Perdidos;
		int Empatados;
		int GolAnotados;
		string MaximoGoleador;
		int GolesAnotados;
	public:
		Seleccion(string,int,int,int,int,string,int);
		Seleccion();
		string getNombre();
		void setNombre(string);

		int getPartidosGanados();
		void setPartidosGanados(int);

		int getPerdidos();
		void setPerdidos(int);

		int getEmpatados();
		void setEmpatados(int);

		int getGolAnotados();
		void setGolAnotados(int);

		string getMaximoGoleador();
		void setMaximoGoleador(string);

		int getGolesAnotados();
		void setGolesAnotados(int);
		
		
		string MaximoGoleadores();
		
		Seleccion* SeleccionGoleadores();
		
		Seleccion* SeleccionGanadores();
		
		

};
#endif