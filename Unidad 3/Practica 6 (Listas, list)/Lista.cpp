# include <iostream>
# include <list>
using namespace std;
int main()
{
	int n, opc;
	list<int>l;
	do
	{
		system("cls");
		cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
		cout<<"||---LISTAS CON BIBLIOTECA ESTANDAR---||"<<endl;
		cout<<" 1. Insertar en frente \n 2. Insertar en final \n 3. Mostrar lista \n 4. Mostrar frente \n 5. Mostrar final"<<endl;
		cout<<" 6. Eliminar frente \n 7. Eliminar final \n 8. Eliminar lista \n 9. Salir"<<endl;
		cin>>opc;
		system("cls");
		switch(opc)
		{
			case 1:cout<<" 1. Insertar en frente \n";
			do
			{
				cin>>n;
				l.push_front(n);
			}while(n<0);
				break;
			case 2:cout<<" 2. Insertar en final \n";
			do
			{
				cin>>n;
				l.push_back(n);
			}while(n<0);
				break;
			case 3: cout<<" 3. Mostrar lista \n";
			if(l.empty())
			{
				cout<<" No hay datos en la lista \n";
			}
			else
			{
				list<int>::iterator it = l.begin();
				cout<<"elementos de la lista"<<endl;
				while(it != l.end())
				{
					cout<<*it++<<"\t";
				}
				cout<<endl;
			}
			system("pause");
				break;
			case 4: cout<<" 4. Mostrar frente \n";
			if(l.empty())
			{
				cout<<" No hay datos en la lista \n";
			}
			else
			{
				cout<<*l.begin()<<"\n";
			}
			
			system("pause");
				break;
			case 5: cout<<" 5. Mostrar final \n";
			if(l.empty())
			{
				cout<<" No hay datos en la lista \n";
			}
			else
			{
				cout<<*l.rbegin()<<"\n";
			}
			system("pause");
				break;
			case 6:cout<<" 6. Eliminar frente \n";
			if(l.empty())
			{
				cout<<" No hay datos en la lista \n";
			}
			else
			{
				cout<<"Se elimino: "<<*l.begin()<<"\n";
				l.pop_front();
			}
			system("pause");
				break;
			case 7:cout<<" 7. Eliminar final \n";
			if(l.empty())
			{
				cout<<" No hay datos en la lista \n";
			}
			else
			{
				cout<<"Se elimino: "<<*l.rbegin()<<"\n";
				l.pop_back();
			}
			system("pause");
				break;
			case 8:cout<<" 8. Eliminar lista \n";
			if(l.empty())
			{
				cout<<" No hay datos en la lista \n";
			}
			else
			{
				cout<<"\n Se elimino: \n ";
				list<int>::iterator it = l.begin();
				cout<<"elementos de la lista"<<endl;
				while(it != l.end())
				{
					cout<<*it++<<"\t";
				}
				cout<<endl;
				l.clear();
			}
			system("pause");
				break;
			case 9: cout<<" SOBRESss"<<endl;
				break;
			default:cout<<"elige una opcion correcta"<<endl;
			system("pause");
			break;
		}
		
	}while(opc<=8 || opc>9);
	
	
	system("pause");
	return 0;
}
