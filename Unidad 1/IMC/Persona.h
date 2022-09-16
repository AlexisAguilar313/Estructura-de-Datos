#include <cstdlib>
#include <iostream>

using namespace std;

class Persona//TDA (tipo de dato abstracto)
{
	private:
		float peso, estatura, imc;
		string nombre, dg;
		
	public:
		Persona() { peso=0; estatura=0; imc=0;
		}
		void visualizar ();
		void calcularIMC();
		void setEst(float es);
		void setPeso(float pe);
		void setNombre(string n);
		void diagnostico();
};
	
void Persona::visualizar()
{
	cout<<"Indice de Masa Corporal:"<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Estatura: "<<estatura<<endl;
	cout<<"Peso: "<<peso<<endl;
	cout<<"IMC: "<<imc<<endl;
	cout<<"Diagnostico: "<<dg<<endl;

}


void Persona::calcularIMC()
{
	imc=peso/(estatura*estatura);
}

void Persona::setEst(float es)
{
	estatura=es;
}

void Persona::setPeso(float pe)
{
	peso=pe;
}

void Persona::setNombre(string n)
{
	nombre=n;
}

void Persona::diagnostico()
{
	if(imc<18.5)
	{
		dg="Bajo de peso";
	}
	else
	{
		if(imc>=18.5 && imc<=24.9)
		{
			dg="Peso normal";
		}
		else
		{
			if(imc>=25 && imc<=26.9)
			{
				dg="Sobrepeso";
			}
			else
			{
				if(imc>=27 && imc<=29.9)
				{
					dg="Obesidad grado 1";
				}
				else
				{
					if(imc>=30 && imc<=39.9)
					{
						dg="Obesidad grado 2";
					}
					else
					{
						if(imc>=40)
						{
							dg="Obesidad grado 3";
						}
					}
				}
			}
		}
	}
}












