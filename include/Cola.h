#include "Nodo.h"

class Cola
{
public:
	//Atributos
		Nodo* H;
		Nodo* T;

	//Constructor
		Cola();
		Cola(int Dato);

	//Métodos
		void InsertarF(int Dato);	//Encolar
		int BorrarP();			//Desencolar
		Nodo *Buscar(int Dato);
		bool IsVacio();
		void VaciarCola();
		void Show();
	
};
