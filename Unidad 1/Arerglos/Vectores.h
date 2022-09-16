#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;

class Arreglo
{
private:
    int *A1;//puntero
    int *A2;
    int *M;
    int n;
    
    
public: 
    Arreglo(int num ) {n=num; A1 = new int [num];A2 = new int [num];M = new int [num];}
    
    void visualizar();
    void multiplicar();
    void setA1();
    void setA2();
    void Liberar();
};


void Arreglo::visualizar() 
{
    cout<< "Vectores:" <<endl;
    for (int i=0;i<n;i++)
    {
    cout<< A1[i]<<" x " <<A2[i]<<"="<<M[i]<<endl;
    }
    
}

void Arreglo::multiplicar() 
{
    
 for(int i=0;i<n;i++)
 {
      M[i]=A1[i]*A2[i];
 }
 
 }

void Arreglo::setA1() 
{
    cout<<"Escribe los "<< n <<"  datos del primer arreglo"<<endl;
    for (int i=0;i<n;i++)
    {
    cin>>A1[i];
    }
}
void Arreglo::setA2() 
{
    cout<<"Escribe los "<< n <<"  datos del segundo arreglo"<<endl;
    for (int i=0;i<n;i++)
    {
    cin>>A2[i];
    }
}
void Arreglo::Liberar() 
{
   delete [] A1;
   delete [] A2;
   delete [] M;
    
}

