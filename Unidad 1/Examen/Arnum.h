#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;
class Arnum
{
	private:
		int *A;
		int n;
		int *pares, *impares, par;
		int *m3, multi3;
		
	public:
		Arnum(int num){n=num; A=new int [num]; impares=new int [num]; pares=new int[num]; par=0; multi3=0; m3=new int[num];
		}
		void visualizar();
		void setA();
		void setpares();
		void setimpares();
		void setm3();
		void liberar();
	
};

void Arnum::visualizar()
{
	cout<<"DATOS: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"\n";
	}
	cout<<endl;
}

void Arnum::setA()
{
	cout<<"introduce los "<<n<<" numeros"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
}

void Arnum::setpares()
{
	for(int i=0;i<n;i++)
	{
		
		if(A[i]%2==0)
		{
			pares[par]=A[i];
			par=par+1;
		}
		
		
	}
	
	
	cout<<"Pares: \n";
	for(int i=0;i<par;i++)
	{
		cout<<"["<<pares[i]<<"]"<<"\n";
	}
	cout<<endl;
	
	
}

void Arnum::setimpares()
{
	cout<<"Impares: \n";
	for(int i=0;i<n;i++)
	{
		if(A[i]%2!=0)
		{
			cout<<A[i]<<"\n";
		}
	}
	cout<<endl;
}

void Arnum::setm3()
{
	cout<<"Multiplo de 3: \n";
	for(int i=0;i<n;i++)
	{
		
		if(A[i]%3==0)
		{
			m3[multi3]=A[i];
			multi3=multi3+1;;
		}
	}
	
	for(int i=0;i<multi3;i++)
	{
		cout<<"["<<m3[i]<<"]"<<"\n";
	}

	
	
}


void Arnum::liberar()
{
	delete [] A;
	delete [] pares;
	delete [] impares;
	delete [] m3;
}








