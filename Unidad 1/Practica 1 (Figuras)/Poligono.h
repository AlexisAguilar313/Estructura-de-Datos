#include <cstdlib>
#include <iostream>

using namespace std;

class Poligono
{
	private:
		float lado, nlado, apotema, area, perimetro;
	
	public:
		Poligono(){lado=0; nlado=0; apotema=0; perimetro=0; area=0;		
	}
		void Perimetro();
		void Area();
		void setNlado(float nl);
		void setLado(float l);
		void setApotema(float ap);
		void resuldato();
};

void Poligono::resuldato()
{
	system("cls");
	cout<<"-----------POLIGONO----------"<<endl;
	cout<<"Numero de lados: "<<nlado<<endl;
	cout<<"Lado: "<<lado<<endl;
	cout<<"Apotema: "<<apotema<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
	cout<<"Area: "<<area<<endl;
	
}

void Poligono::Perimetro()
{
	perimetro=nlado*lado;
}

void Poligono::Area()
{
	area=(perimetro*apotema)/2;
}

void Poligono::setNlado(float nl)
{
	nlado=nl;
}

void Poligono::setLado(float l)
{
	lado=l;
}

void Poligono::setApotema(float ap)
{
	apotema=ap;
}

