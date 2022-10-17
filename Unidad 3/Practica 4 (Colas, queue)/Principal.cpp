#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> s;
    int x;
    int opc;
        do{
        	system("cls");
        	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
        	cout<<"||---COLAS CON BIBLIOTECA ESTANDAR---||"<<endl;
			cout<<"\n 1. Insertar \n 2. Eliminar \n 3. Mostrar Frente \n 4. Mostrar Final \n 5. Mostrar elementos de la cola \n 6. Salir"<<endl;
        	
        	cin>>opc;
        	system("cls");
        	switch(opc)
        	{
        		case 1: 
					cout<<"1. Insertar "<<endl;
					do{
						cout<<"Ingresa los datos de la cola"<<endl;
						cin>>x;
						s.push(x);
					}while(x<0);	
        			break;
        		case 2:cout<<"2. Eliminar "<<endl;
        		if(s.empty())
        		{
        			cout<<"No hay datos en la cola "<<endl;
				}
				else
				{
					cout<<"Se elimino "<<s.front()<<endl;
					s.pop();
				}
				system("pause");
        			break;
        		case 3:cout<<"3. Mostrar Frente "<<endl;
       			if(s.empty())
        		{
        			cout<<"No hay datos en la cola "<<endl;
				}
				else
				{
					cout<<"En el frente esta: "<<s.front()<<endl;
					cout<<endl;
				}
				system("pause");
        			break;
        		case 4:cout<<"4. Mostrar Final"<<endl;
        		if(s.empty())
        		{
        			cout<<"No hay datos en la cola "<<endl;
				}
				else
				{
					cout<<"En el frente esta: "<<s.back()<<endl;
					cout<<endl;
				}
				system("pause");
					break;		
				case 5:cout<<"5. Mostrar elementos de la cola"<<endl;
				if(s.empty())
        		{
        			cout<<"No hay datos en la cola "<<endl;
				}
				else
				{
					while(!s.empty())
					{
						cout<<s.front()<<"\t ";
						s.pop();
					}
				}
				cout<<endl;
				system("pause");
				case 6:
					cout<<" SOBRESss"<<endl;
					break;
				default: cout<<" Seleccione una opcion correcta"<<endl;
					system("pause");
			}
		}while(opc<=5);
    system("pause");
    
    return 0;
}
