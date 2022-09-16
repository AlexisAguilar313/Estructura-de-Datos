#include <cstdlib>
#include <iostream>

using namespace std;

class Cuadrado
{
	private:
		float perimetro, area, lado;
	
	public:
		Cuadrado(){area=0, perimetro=0, lado=0;
		}
		void Perimetro();
		void Area();
		void setLado(float l);
		void resultado();
};

void Cuadrado::resultado()
{
	system("cls");
	cout<<"-----------CUADRADO----------"<<endl;
	cout<<"Lado: "<<lado<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
	cout<<"Area: "<<area<<endl;
}

void Cuadrado::Perimetro()
{
	perimetro=lado*4;
}

void Cuadrado::Area()
{
	area=lado*lado;
}

void Cuadrado::setLado(float l)
{
	lado=l;
}


