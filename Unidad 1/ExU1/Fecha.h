#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;

class Fecha
{
	private:
		int dia, mes, anio;
	
	public:
		Fecha(){dia=mes=anio=0;
		}
		Fecha(int d, int m, int a){dia=mes=anio=0;
		}
		void visualizarFecha();
		void compararFecha();
	
};

void Fecha::visualizarFecha()
{
	cout<<"Introduce el dia"<<endl;
	cin>>dia;
	cout<<"Introduce el mes"<<endl;
	cin>>mes;
	cout<<"Introduce el año"<<endl;
	cin>>anio;
	if(anio>2022 || mes>13 || dia<1||mes<1 ||anio<1)
	{
		cout<<"ERROR__---... 0_o \n no ha pasado ese año o no extiste"<<endl;
	}
	else
	{
		if(mes==1 && dia<32)
		{
			cout<<"Fecha: "<<dia<<" de Enero de "<<anio<<endl;
		}
		else
		{
			if(mes==2 && dia<29)
			{
				cout<<"Fecha: "<<dia<<" de Febrero de "<<anio<<endl;
			}
			else
			{
				if(mes==3 && dia<32)
				{
					cout<<"Fecha: "<<dia<<" de Marzo de "<<anio<<endl;
				}
				else
				{
					if(mes==4 && dia<31)
					{
						cout<<"Fecha: "<<dia<<" de Abril de "<<anio<<endl;
					}
					else
					{
						if(mes==5 && dia<32)
						{
							cout<<"Fecha: "<<dia<<" de Mayo de "<<anio<<endl;
						}
						else
						{
							if(mes==6 && dia<31)
							{
								cout<<"Fecha: "<<dia<<" de Junio de "<<anio<<endl;
							}
							else
							{
								if(mes==7 && dia<32)
								{
									cout<<"Fecha: "<<dia<<" de Julio de "<<anio<<endl;
								}
								else
								{
									if(mes==8 && dia<32)
									{
										cout<<"Fecha: "<<dia<<" de Agosto de "<<anio<<endl;
									}
									else
									{
										if(mes==9 && dia<31)
										{
											cout<<"Fecha: "<<dia<<" de Septiembre de "<<anio<<endl;
										}
										else
										{
											if(mes==10 && dia<32)
											{
												cout<<"Fecha: "<<dia<<" de Octubre de "<<anio<<endl;
											}
											else
											{
												if(mes==11 && dia<31)
												{
													cout<<"Fecha: "<<dia<<" de Noviembre de "<<anio<<endl;
												}
												else
												{
													if(mes==12 && dia<32)
													{
														cout<<"Fecha: "<<dia<<" de Diciembre de "<<anio<<endl;
													}
												}
												
											}
										}
									}
								}
							}
						}
						
					}
				}
			}
		}
	}
	
	
}

void Fecha::compararFecha()
{
	if(dia==3 && mes==12)
	{
		cout<<"Felicidades_Hoy es tu cumpleaños :) "<<endl;
	}
	if(anio>2022 || mes>13 || dia<1||mes<1 ||anio<1)
	{
		cout<<"No hay fecha"<<endl;
	}
	else
	{
		cout<<"hoy no es tu cumpleaños "<<endl;
	}
	
	
}





