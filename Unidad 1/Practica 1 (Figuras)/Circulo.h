#include <cstdlib>
#include <iostream>

using namespace std;

class Circulo
{
	private:
		float perimetro, area, diametro, radio;
	
	public:
		Circulo(){perimetro=0; area=0; diametro=0; radio=0;
		}
		void Area();
		void Perimetro();
		void setDiametro(float d);
		void setRadio();
		void resultado();
};

void Circulo::resultado()
{
	system("cls");
	cout<<"-----------CIRCULO----------"<<endl;
	cout<<"Diametro: "<<diametro<<endl;
	cout<<"Radio: "<<radio<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
	cout<<"Area: "<<area<<endl;
}

void Circulo::Perimetro()
{
	perimetro=3.1416*diametro;
}

void Circulo::Area()
{
	area=3.1416*(radio*radio);
}

void Circulo::setDiametro(float d)
{
	diametro=d;
}

void Circulo::setRadio()
{
	radio=diametro/2;
}
