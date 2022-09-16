#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class Triangulo
{
	private:
		float area, perimetro, lado1, lado2, lado3, semiperimetro;
	
	public:
		Trigangulo(){area=0; lado1=0; lado2=0; lado3=0; perimetro=0; semiperimetro=0;
		}
		void resultado();
		void Area();
		void Perimetro();
		void Semiperimetro();
		void setl1(float l1);
		void setl2(float l2);
		void setl3(float l3);
		
		
};

void Triangulo::resultado()
{
	system("cls");
	cout<<"-----------TRIANGULO----------"<<endl;
	cout<<"Lado 1: "<<lado1<<endl;
	cout<<"Lado 2: "<<lado2<<endl;
	cout<<"Lado 3: "<<lado3<<endl;
	cout<<"Semiperimetro:  "<<semiperimetro<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
	cout<<"Area: "<<area<<endl;
}

void Triangulo::Area()
{
	area=sqrt(semiperimetro*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3));
}

void Triangulo::Perimetro()
{
	perimetro=lado1+lado2+lado3;
}

void Triangulo::Semiperimetro()
{
	semiperimetro=perimetro/2;
}


void Triangulo::setl1(float l1)
{
	lado1=l1;
}

void Triangulo::setl2(float l2)
{
	lado2=l2;
}

void Triangulo::setl3(float l3)
{
	lado3=l3;
}

