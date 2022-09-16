#include <cstdlib>
#include <iostream>

using namespace std;

class Rectangulo
{
	private:
		float base, altura, area, perimetro;
	
	public:
		Rectangulo(){ base=0; altura=0; area=0; perimetro=0;
		}
	void Perimetro();
	void Area();
	void setBase(float b);
	void setAltura(float h);
	void resultado();
	
};

void Rectangulo::resultado()
{
	system("cls");
	cout<<"-----------RECTANGULO----------"<<endl;
	cout<<"Base: "<<base<<endl;
	cout<<"Altura: "<<altura<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
	cout<<"Area: "<<area<<endl;
}

void Rectangulo::Area()
{
	area=base*altura;
}

void Rectangulo::Perimetro()
{
	perimetro=2*(base+altura);
}

void Rectangulo::setBase(float b)
{
	base=b;
}

void Rectangulo::setAltura(float h)
{
	altura=h;
}
