# include <cstdlib>
# include <iostream>
# include <stack>

using namespace std;

int main (int argc, int * argve[])
{	
	int opc;
	int x;
	stack<int> s;
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
				case 1:
					do
					{
						cout<<"Ingresa los datos de la pila"<<endl;
						cin>>x;
						s.push(x);
					}while(x<0);
					
					break;
				case 2:cout<<"2. Eliminar\n";
				if(s.empty())
				{
					cout<<"No hay ningun dato en la pila"<<endl;
				}
				else
				{
						cout<<"Se elimino: "<<s.top()<<"\n";
						s.pop();
				}
				system("pause");
					break;
				case 3: cout<<"3. Mostrar Cima "<<endl;
       			if(s.empty())
        		{
        			cout<<"No hay datos en la pila "<<endl;
				}
				else
				{
					cout<<"En el frente esta: "<<s.top()<<endl;
					cout<<endl;
				}
				system("pause");
					break;
				case 4: cout<<"5. Mostrar Pila"<<endl;
				if(s.empty())
        		{
        			cout<<"No hay datos en la pila "<<endl;
				}
				else
				{
				while (! s.empty())
				{
					cout<<s.top()<<"\t ";
					s.pop();
				}
				cout<<endl;	
				}
				
				system("pause");
					break;
				case 5:cout<<" SOBRESss"<<endl;
					break;
			}
	}while(opc<=4);
	
	
	
	system("pause");
	return 0;
}
