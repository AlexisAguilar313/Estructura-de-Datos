#include "Numeros.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main (int argc, char * arg[])
{
	int n, r=1, rb=1;
	bool x=false;
	//cout<<""<<endl;
	
	do
	{
		
	
		system("cls");
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"//////////---BUSCADOR DE NUMEROS EN ARREGLOS---\\\\\\\\\\\\\\\\"<<endl;
	cout<<"Cuantos numeros desea ingresar"<<endl;
	cin>>n;
	if(n<1)
	{
		cout<<"ERROR  0_q  no se insertan valores negativos"<<endl;
	}
	else
	{
		Numeros N(n);
		N.setA1();
		do
		{
		
		system("cls");
		N.buscar();
		N.visualizar();
		cout<<"desea volver a buscar? \n si[1] \n no[cualquier numero]"<<endl;
		cin>>rb;
		
		}while(rb==1);
		N.liberar();	
	}
		
		cout<<"desea volver a insertar? \n si[1] \n no[cualquier numero]"<<endl;
		cin>>r;	
		}while(r==1);
	getchar();
    system("pause");
    return 0;
}

























