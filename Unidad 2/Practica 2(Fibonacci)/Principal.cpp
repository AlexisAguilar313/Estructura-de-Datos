#include "Fivonacci.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main (int argc, char * arg[])
{
	Fivonacci F;
	int n, opc, r=1, r2=1;
	do
	{
	system("cls");
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"//////////---BUSCADOR DE FIVONACCI---\\\\\\\\\\\\\\\\"<<endl;
	cout<<"Hasta que numero desea crear la secuencia"<<endl;
	cin>>n;
	if(n<1)
	{
		cout<<"ERROR__||||||****0_o  valores incorrectos"<<endl;
	}
	else
	{	
	do
	{
	system("cls");	
	cout<<"Numero de la posicion: "<<n<<"\n Como lo desea solicitar: \n 1. Recursiva \n 2. Iterativa"<<endl;
	cin>>opc;
	system("cls");
	
	switch(opc)
	{
		case 1:cout<<"1. Recursiva"<<endl;
		cout<<F.Recursiva(n);
		cout<<endl;
		F.visualizar(n);
		
		cout<<endl;
			break;
			
		case 2: cout<<"2. Iterativa"<<endl;
		F.Iterativa(n);
			break;
		default:cout<<"ERROR__||||||****0_o   no existe esa opcion"<<endl;
	}
	cout<<"desea volver al menu? \n si[1] \n no[cualquier numero]"<<endl;
	cin>>r;
	}while(r==1);	
	}
	cout<<"desea volver al menu? \n si[1] \n no[cualquier numero]"<<endl;
	cin>>r2;
	}while(r2==1);
	getchar();
    system("pause");
    return 0;
}
