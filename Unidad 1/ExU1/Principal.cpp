#include "Fecha.h"
#include <cstdlib>
#include <iostream>


using namespace std;
int main (int argc, char * arg[])
{
	int d, m, a, r=1;
	system("cls");
	cout<<"////----DIEGO ALEXIS AGUILAR CRUZ----"<<endl;
	cout<<"EXEMANEN U1"<<endl;
	cout<<"PROGRAMA QUE INSERTA LA FECHA"<<endl;
	
		Fecha hoy(d, m, a);
		do
		{
		
			hoy.visualizarFecha();
			hoy.compararFecha();
			cout<<"Desea volver a insertar? \n Si[1] \n No[cualquier numero]"<<endl;
			cin>>r;
		}while(r==1);
	


	getchar();
    system("pause");
    return 0;
}

