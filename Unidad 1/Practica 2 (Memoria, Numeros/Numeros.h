#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;

class Numeros
{
	private:
		int *A1;
		int n;
		bool x;
		int na;
	
	public:
		Numeros(int num){n=num; A1=new int [num]; x=false; na=0;}
		
		void visualizar(); 
		void buscar();
		void setA1 ();
		void liberar ();
		
};


void Numeros::visualizar()
{
	cout<<"Pocision  Datos"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<i<<"         "<<A1[i]<<endl;
	}
	
}

void Numeros::setA1()
{
	cout<<"Escribe los "<<n<<" numeros"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A1[i];
	}
}

void Numeros::buscar()
{
	cout<<"Que numero desea buscar?"<<endl;
	cin>>na;
	for(int i=0;i<na;i++)
	{
		if(A1[i]==na)
		{
			x=true;
			cout<<"El numero "<<na<<" se encuentra en la posicion "<<i<<endl;
		}
		
		
	}
	
		if(x==false)
		{
			cout<<"El numero "<<na<<" no se encuentra entre los datos incertados"<<endl;
		}
	
	
}


void Numeros::liberar()
{
	delete [] A1;
}













