#include "Vectores.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main (int argc, char * arg[])
{
   int c;
    cout<< "Programa que calcula multiplicacion de  n datos de dos arreglos"<<endl;
    cout<<"¿Cuantos datos deseas multiplicar?"<<endl;
    cin>>c;
    Arreglo Pro(c);
    
    Pro.setA1();
    Pro.setA2();
    Pro.multiplicar();
    Pro.visualizar();
    Pro.Liberar();
    
    getchar();
    system("pause");
    return 0;
}
