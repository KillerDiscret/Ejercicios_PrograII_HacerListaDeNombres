#pragma once
#include "persona.h"

class arregloPersona
{
private:
	Persona **Arrobjetos;
	int *N;
public:
	arregloPersona();
	void agregarPersona(Persona *obj);
	Persona *retornarPersona(int indice);
	int get_N();
	~arregloPersona();
};
arregloPersona::arregloPersona()
{
	Arrobjetos = NULL;
	N = new int;
	*N = 0;
}
void arregloPersona::agregarPersona(Persona *obj)
{
	Persona **temporal;
	temporal = new Persona*[*N + 1];
	if (temporal!=NULL)
	{
		for (int i=0; i<*N;i++)
		{
			temporal[i] = Arrobjetos[i];
		}
		temporal[*N] = obj;
		*N = *N + 1;
		Arrobjetos = temporal;
	}

}
Persona *arregloPersona::retornarPersona(int indice)
{
	return Arrobjetos[indice];
}
int arregloPersona::get_N()
{
	return *N;
}
arregloPersona::~arregloPersona()
{

}
