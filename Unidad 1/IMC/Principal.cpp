#include "Persona.h"
#include <cstdlib>
#include <iostream>//biblioteca flujo de entrada y salida

using namespace std//espacio de trabajo

int main (int argc, char*arg[])
{
	float pe, al, imc;
	string n;
	
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"		-------BIENVENIDO--------"<<endl;
	cout<<"\t 	Programa que calcula el IMC"<<endl;
	cout<<"Escrbibe tu nombre:"<<endl;
	cin>>n;
	cout<<"Escribe tu peso:"<<endl;
	cin>>pe;
	cout<<"Escribe tu estatura"<<endl;
	cin>>al;
	
	Persona P; //creacion del objeto
	P.setNombre(n);
	P.setEst(al);
	P.setPeso(pe);
	P.calcularIMC();
	P.diagnostico();
	system("cls");
	P.visualizar();
	getchar();
	system("pause");
	return 0;
	
	
	
}














