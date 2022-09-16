#include "Rectangulo.h"
#include "Triangulo.h"
#include "Poligono.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char*arg[])
{
	float b, h, l1, l2, l3, nl, l, ap, d, rd;
	int opc, r=1;
	while(r==1)
	{
		
	system("cls");
	cout<<"||-----------© Diego Alexis Aguilar Cruz--------------||"<<endl;
	cout<<"			AREA DE FIGURAS GEOMETRICAS"<<endl;
	cout<<"eliga una opcion"<<endl;
	cout<<" 1. Rectangulo \n 2. Triangulo \n 3. Poligono \n 4. Circulo  \n 5. Cuadrado"<<endl;
	cin>>opc;
	Rectangulo R;
	Triangulo T;
	Poligono P;
	Circulo Cr;
	Cuadrado Cd;
	system("cls");
	switch(opc)
	{
		case 1: cout<<"-----------RECTANGULO----------"<<endl;
		cout<<"introduce la base:"<<endl;
		cin>>b;
		system("cls");
		cout<<"-----------RECTANGULO----------\n introduce la altura"<<endl;
		cin>>h;
		system("cls");
		if(b<=0 || h<=.0)
		{
			cout<<"ERROR 0_o \n no existen valores negativos"<<endl;
		}
		else
		{
			R.setBase(b);
			R.setAltura(h);
			R.Area();
			R.Perimetro();
			R.resultado();
		}
			break;
		case 2:cout<<"-----------TRIANGULO----------\n primer lado"<<endl;
		cin>>l1;
		system("cls");
		cout<<"-----------TRIANGULO----------\n segundo lado"<<endl;
		cin>>l2;
		system("cls");
		cout<<"-----------TRIANGULO----------\n tercer lado"<<endl;
		cin>>l3;
		if(l1<=0 || l2<=0 || l3<=0)
		{
			cout<<"ERROR 0_o \n no existen valores negativos"<<endl;
		}
		else
		{
		
			T.setl1(l1);
			T.setl2(l2);
			T.setl3(l3);
			T.Perimetro();
			T.Semiperimetro();
			T.Area();
			T.resultado();
		}
			break;
		case 3: cout<<"-----------POLIGONO----------\n introduce numero de lados"<<endl;
		cin>>nl;
		system("cls");
		cout<<"-----------POLIGONO----------\n introduce medida del lado"<<endl;
		cin>>l;
		system("cls");
		cout<<"-----------POLIGONO----------\n introduce apotema"<<endl;
		cin>>ap;
		if(nl<=0 || l<=0 || ap<=0)
		{
			cout<<"ERROR 0_o \n no existen valores negativos"<<endl;
		}
		if(nl<=2)
		{
			cout<<"ERROR 0_o \n no existen figuras de menos de tres lados"<<endl;
		}
		else
		{
			P.setNlado(nl);
			P.setLado(l);
			P.setApotema(ap);
			P.Perimetro();
			P.Area();
			P.resuldato();
		}
			break;
		case 4:cout<<"-----------CIRCULO----------\n introduce el diametro"<<endl;
		cin>>d;
		if(d<=0 )
		{
			cout<<"ERROR 0_o \n no existen valores negativos"<<endl;
		}
		else
		{
			Cr.setDiametro(d);
			Cr.setRadio();
			Cr.Perimetro();
			Cr.Area();
			Cr.resultado();
		}
			break;
		case 5:cout<<"-----------CUADRADO----------\n introduce el lado"<<endl;
		cin>>l;
		if(l<=0 )
		{
			cout<<"ERROR 0_o \n no existen valores negativos"<<endl;
		}
		else
		{
			Cd.setLado(l);
			Cd.Perimetro();
			Cd.Area();
			Cd.resultado();
		}
			break;
		default:cout<<"ERROR, eliga la opcion correcta"<<endl;
	}
	
	cout<<"\n- Regresar al menu [1] \n- Salir[presiona cualquier numero]"<<endl;
	cin>>r;
	}
	getchar();
	system("pause");
	return 0;
}








