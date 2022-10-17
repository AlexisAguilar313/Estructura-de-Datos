#include <iostream>
using namespace std;
#include "ColaLineal.h"

int main()
{
    ColaLineal cola;
    int x;
    int opc;
        do{
        	system("cls");
        	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
        	cout<<"||---COLAS---||"<<endl;
			cout<<"\n 1. Insertar \n 2. Eliminar \n 3. Mostrar Frente \n 4. mostrar elementos de cola \n 5. Salir"<<endl;
        	
        	cin>>opc;
        	switch(opc)
        	{
        		case 1: 
						if(cola.colaLlena())
		        		{
        					cout<<"cola llena \n no se pueden ingresar datos"<<endl;	
        					system("pause");
						}
						else
						{
							cout<<"ingresa el valor a ingresar"<<endl;	
							cin>>x;
							cola.insertar(x);
						}
        			break;
        		case 2:
        			if(cola.colaVacia())
        			{
        				cout<<"No hay ningun dato en la cola"<<endl;
					}
        			else
        			{
        				cout<<"Se elimino: "<<cola.quitar()<<endl;
        				system("pause");
					}
        			break;
        		case 3:
        			if(cola.colaVacia())
        			{
        				cout<<"no hay ningun dato en la cola"<<endl;
					}
					else
					{
						x=cola.frenteCola();
						cout<<"Al frente esta: "<<x<<endl;
				 	system("pause");
					}
        			break;
        		case 4:
        			while(!cola.colaVacia())
        			{
        				x=cola.quitar();
        				cout<<x<<"\t";
					}
					cout<<endl;
					system("pause");
					break;		
				case 5:
					cout<<" SOBRESss"<<endl;
					break;
				default: cout<<" Seleccione una opcion correcta"<<endl;
					system("pause");
			}
		}while(opc<=4);
    system("pause");
}
