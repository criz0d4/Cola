//Clase Nodo
#include <iostream>

class Nodo
{

	//Atributos
		int Dato;
		Nodo *Sig;

	//Métodos
	public:
		Nodo(int Dato, Nodo* Sig);
		Nodo(int Dato);
		void setDato(int Dato);
		void setSig(Nodo* Sig);
		int getDato();
		Nodo *getSig();

};
