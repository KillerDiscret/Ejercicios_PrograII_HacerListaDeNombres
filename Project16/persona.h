#pragma once
#include <iostream>
#include <conio.h>
class Persona
{
private:
	char *nombre;
public:
	Persona();
	void set_nombre(char *NOMBRE);
	char *get_nombre();
	~Persona();
};
Persona::Persona()
{
	nombre = new char[20];
}
void Persona::set_nombre(char *NOMBRE)
{
	nombre = NOMBRE;
}
char *Persona::get_nombre()
{
	return nombre;
}
Persona::~Persona()
{

}