#include "persona.h"
#include "Arreglo.h"
using namespace std;
using namespace System;

int menu()
{
	int op;
	do
	{
		system("cls");
		cout << "Ingrese una opcion" << endl;
		cout << "1-Agregar Nombre" << endl;
		cout << "2-Mostrar Lista" << endl;
		cin >> op;
	} while (op < 1 || op>2);
	return op;
}


int main()
{
	Persona *obj;
	arregloPersona *ArreObj;
	int opcion;
	ArreObj = new arregloPersona();
	Console::SetWindowSize(82, 30);
	while (1)
	{
		opcion = menu();
		if (opcion==1)
		{
			obj = new Persona();
			char *nombre;
			nombre = new char[20];
			cout << "Ingrese un nombre:" << endl;
			cin >> nombre;
			obj->set_nombre(nombre);
			ArreObj->agregarPersona(obj);
		}
		if (opcion==2)
		{
			if (ArreObj->get_N()!=0)
			{
				for (int i = 0; i < ArreObj->get_N(); i++)
				{
					cout << ArreObj->retornarPersona(i)->get_nombre() << endl;
				}
			}
			else
			{
				cout << "El arreglo esta vacio" << endl;
			}
			_getch();
		}
	}





	_getch();
}