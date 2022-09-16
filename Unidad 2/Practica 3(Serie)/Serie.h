#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Serie
{
	private:
		int n, *As;
		
	public:
		Serie(int num){ n=num; As=new int [num];
		}
		int sR(int n);
		int sI(int n);
		void visualizar(int n);
		void Liberar();
};

int Serie::sR(int n)
{
	if(n==1)
	{
		return -3;	
	}
	else
	{
		return sR(n-1)-11;
	}
}

int Serie::sI(int n)
{
	int s=8;
	for(int i=0;i<n;i++)
	{
		s=s-11;
		As[i]=s;
		cout<<As[i]<<"\t";
	}
}

void Serie::visualizar(int n)
{
	for(int i=1;i<=n;i++)
	{
		As[i]=sR(i);
		cout<<As[i]<<"\t";
	}
}


void Serie::Liberar()
{
	delete [] As;
}

