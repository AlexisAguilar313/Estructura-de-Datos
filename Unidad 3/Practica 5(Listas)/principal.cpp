# include  <iostream>
# include "Lista.h"
using namespace std;
int main()
{
	int n, opc;
	Lista x;
	do
	{	
	system("cls");
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"||---LISTAS---||"<<endl;
	cout<<" 1. Insertar \n 2. Mostrar lista \n 3. Salir"<<endl;
	cin>>opc;
	system("cls");
	switch(opc)
	{
		case 1:
			cout<<"1. Insertar "<<endl;
			do{
				cout<<"Ingresa los datos de la lista"<<endl;
				cin>>n;
				x.insertarLista(n);
			}while(n<0);
			break;
		case 2: cout<<"2. Mosrtar lista "<<endl;
			if(n==0)
			{
				cout<<"La lista esta vacia"<<endl;
			}
			else
			{
				x.visualizarLista();
			}
			system("pause");
			break;
		case 3: cout<<" SOBRESss"<<endl;
			break;
	}
	}while(opc<=2);
	system("pause");
	return 0;
	
	
}
