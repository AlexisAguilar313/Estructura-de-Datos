#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;

class Fivonacci
{
	private:
		int n;
	
	public:
		Fivonacci (){n=0;
		}
		int Recursiva(int n);
		int Iterativa(int n);
		int visualizar(int n);
};

int Fivonacci::Recursiva(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return Recursiva(n-1)+Recursiva(n-2);		
	}
}
		
int Fivonacci::Iterativa(int n)
{
	int x=1, y=1, z=1;
	for(int i=1;i<=n;i++)
	{
			cout<<x<<"\t";
			y=z;
			z=x+y;
			x=y;
	}
	cout<<endl;
}


int Fivonacci::visualizar(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<Recursiva(i)<<"\t";
	}
}


