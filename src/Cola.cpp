#include "Cola.h"

//Creación de una nueva cola vacía
Cola::Cola()
{
	this->H = NULL;
	this->T = NULL;
}

//Cola con un nodo, T y H apuntando a auxiliar
Cola::Cola(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	this->H = aux;
	this->T = aux;
}

//Verificar si la cola está vacía
bool Cola::IsVacio()
{
	if (this->H == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Añade un nodo al Final de la cola
void Cola::InsertarF(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->H);
	this->H = aux;
}


//Elimina el nodo al Principio de la cola
int Cola::BorrarP()
{
	if (!IsVacio())
	{
		int Dato = this->H->getDato();	
	if (this->H == NULL)
	{
		this->T = NULL;
	}
	this->H = this->H->getSig();
	return Dato;
	}
	else
	{
		std::cout<<"La cola está vacía"<<std::endl;		
	}
}

//Vacía la cola
void Cola::VaciarCola()
{
	if (IsVacio())
	{
		std::cout<< "La cola está vacía " <<std::endl;
		
	}
	else
	{
		this->H = NULL;
		this->T = NULL;
	}
}

//Buscar un elemento
Nodo *Cola::Buscar(int Dato)
{
	if (!IsVacio())
	{
		Nodo* aux = H;
		while(aux->getDato()!= Dato && aux!=T)
		{
			aux=aux->getSig();
		}
		if(aux->getDato() == Dato)
		{
			return aux;
		}
		else
		{
			std::cout<<"No se encontró el elemento."<<std::endl;
		}
	}
	else
	{
		std::cout<<"La cola vacía, no se encontró el elemento."<<std::endl;	
		return NULL;
	}	
}

//Muestra los elementos de la cola
void Cola::Show()
{
	if(IsVacio())
	{
		std::cout<<"La cola está vacía"<<std::endl;
		return;
	}
	Nodo *aux = this->H;
	while(aux != NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}

}

