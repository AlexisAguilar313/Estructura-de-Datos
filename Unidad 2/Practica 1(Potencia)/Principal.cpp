#include "Potencia.h"
#include <cstdlib>
#include <iostream>


using namespace std;
int main (int argc, char * arg[])
{
	int b, e, opc, r=1, r2=1;
	Potencia P;
	do
	{
		
	system("cls");
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"introduce la base: "<<endl;
	cin>>b;
	cout<<"introduce la potencia: "<<endl;
	cin>>e;
	
	do
	{
	system("cls");
	cout<<"Como lo quiere calcular \n 1. Potencia Recursiva \n 2. Potencia Iterativa"<<endl;
	cin>>opc;
	system("cls");
	switch(opc)
	{
		case 1:
		if(e>=0)
		{
			cout<<P.PotenciaRecursiva(b, e)<<endl;
		//P.visualizar(b, e);
		}
			break;
		
		case 2:
		if(e>=0)
		{
			cout<<P.PotenciaIterativa(b, e)<<endl;
		}
			break;
		default: cout<<"esa opcion no existe "<<endl;
	}
	cout<<"desea volver al menu? \n si[1] \n no[cualquier numero]"<<endl;
	cin>>r;
	}while(r==1);
	
	
	cout<<"desea volver a insertar? \n si[1] \n no[cualquier numero]"<<endl;
	cin>>r2;
	}while(r2==1);
	
	
	
getchar();
    system("pause");
    return 0;
}
