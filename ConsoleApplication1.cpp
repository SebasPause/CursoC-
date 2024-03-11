#include<iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	string nombre = "";
	string apellido = "";
	cout << "Introduce nombre: ";
	cin >> nombre;
	cout << "Introduce apellido: ";
	cin >> apellido;
	cout << "Nombre: " << nombre << " " << apellido;

	//system("pause"); solo para ejecutar exe
	return 0;
}