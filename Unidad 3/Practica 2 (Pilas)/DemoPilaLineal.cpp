#include <iostream>
using namespace std;
#include "PilaLineal.h"

int main()
{
    PilaLineal pila;
    int x;
    int opc;
    do
    {
    	system("cls");
        	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
        	cout<<"||---PILAS---||"<<endl;
			cout<<"\n 1. Insertar \n 2. Eliminar \n 3. Mostrar Cima \n 4. Mostrar Pila \n 5. Salir"<<endl;
			cin>>opc;
			system("cls");
			switch(opc)
			{
				case 1:cout<<"1. Insertar \n";
				if(pila.pilaLlena())
				{
					cout<<"Pila llena \n no se pueden ingresar datos"<<endl;
				}
				else
				{
					cout<<"ingresa el valor a ingresar"<<endl;	
					cin>>x;
					pila.insertar(x);
				}
					break;
				case 2:cout<<"2. Eliminar\n";
				if(pila.pilaVacia())
				{
					cout<<"No hay ningun dato en la pila"<<endl;
				}
				else
				{
						cout<<"Se elimino: "<<pila.quitar()<<"\n";
				}
				system("pause");
					break;
				case 3: cout<<"3. Mostrar Cima \n";
				if(pila.pilaVacia())
				{
					cout<<"No hay ningun dato en la pila"<<endl;
				}
				else
				{
						cout<<"En la cima esta: "<<pila.cimaPila()<<"\n";
				}
				system("pause");
					break;
				case 4:cout<<"4. Mostrar Pila \n";
				if(pila.pilaVacia())
				{
					cout<<"No hay ningun dato en la pila"<<endl;
				}
				else
				{
						cout<<"Pila: ";
						pila.mostrarPila();
						cout<<"\n";
						cout<<"Se elimino: "<<pila.quitar()<<"\n";
				}
				system("pause");
					break;
				case 5:cout<<" SOBRESss"<<endl;
					break;
				default: cout<<" Seleccione una opcion correcta"<<endl;
			}
	}while(opc<=4);
    
    system("pause");
}

