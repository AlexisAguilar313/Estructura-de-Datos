#include "Arnum.h"
#include <cstdlib>
#include <iostream>


using namespace std;
int main (int argc, char * arg[])
{
	int n, opc, r=1, rm=0;
	do
	{
	
	system("cls");
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"//////////---EXAMEN---\\\\\\\\\\\\\\\\"<<endl;
	cout<<"Cuantos numeros desea ingresar"<<endl;
	cin>>n;	
	if(n<1)
	{
		cout<<"ERROR_ no existen arreglos negativos"<<endl;
	}
	else
	{
		Arnum An(n);
		An.setA();
		do
		{
		system("cls");
		cout<<"Que desea buscar: \n 1. Datos Insertados \n 2. Pares \n 3. Impares \n 4. Multiplo 3 \n Salir[cualquier numero]"<<endl;
		cin>>opc;
		system("cls");
		switch(opc)
		{
			case 1: An.visualizar();
				break;
			case 2: An.setpares();
				break;
			case 3: An.setimpares();
				break;
			case 4: An.setm3();
				break;
		}
		
		cout<<"Volver al menu \n Si[1] \n No[cualquier numero]"<<endl;
		cin>>rm;
	
		}while(rm==1);
		An.liberar();
	}
		cout<<"Volver a insertar datos \n Si[1] \n No[cualquier numero]"<<endl;
		cin>>r;
	}while(r==1);
	
	
	
	
	getchar();
    system("pause");
    return 0;
}
