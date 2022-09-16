#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;

class Potencia
{
	private:
		int p;
	
	public:
		Potencia(){p=0;
		}
		int PotenciaRecursiva(int x, int n);
		int PotenciaIterativa(int x, int n);
		void visualizar(int x, int n);
		
};

int Potencia::PotenciaRecursiva(int x, int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return x*PotenciaRecursiva(x, n-1);	
	}
}


int Potencia::PotenciaIterativa(int x, int n)
{	
	p=1;
	for(int i=1;i<=n;i++)
	{
		p=p*x;
	}
	return p;
}


void Potencia::visualizar(int x, int n)
{
	cout<<"La potencia es: "<<PotenciaRecursiva(x, n)<<endl;
}




