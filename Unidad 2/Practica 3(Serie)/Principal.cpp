#include "Serie.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main (int argc, char * arg[])
{
	
	int n, opc, r=1, r2=1;
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"//////////---SERIE ARITMETICA	---\\\\\\\\\\\\\\\\"<<endl;
	cout<<"Hasta que numero desea llegar de la sucecion: \n -3, -14, -25, -36"<<endl;
	cin>>n;
	if(n<1)
	{
		cout<<"ERROR  0_q  no se insertan valores negativos"<<endl;
	}
	else
	{
		do
		{
		
		Serie S(n);
		system("cls");
		cout<<"como lo quiere solicitar? \n1. Recursivo \n2. Iterativo"<<endl;
		cin>>opc;
		system("cls");
		switch(opc)
		{
			case 1:cout<<"1. Recursivo "<<endl; 
			cout<<"r: "<<S.sR(n)<<endl;
			S.visualizar(n);
				break;
			case 2: cout<<"2. Iterativo"<<endl; 
			S.sI(n);
				break;
			default:cout<<"ERROR__||||||****0_o   no existe esa opcion"<<endl;
		}
		cout<<"desea volver al menu? \n si[1] \n no[cualquier numero]"<<endl;
		cin>>r;
		}while(r==1);
	}

	
	
	getchar();
    system("pause");
    return 0;
}
