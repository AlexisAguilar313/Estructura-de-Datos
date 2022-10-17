//lista: conjunto de nodos
typedef int TipodeDato;
# include  <iostream>
#include "Nodo.h"

using namespace std;
class Lista
{
    private:
    
        Nodo* primero;
        
    public:
        //Método constructor
        Lista()
        {
                primero=NULL;
        }
        void crearLista();
        void insertarLista(TipodeDato entrada);
        void visualizarLista();
        
};

void Lista::insertarLista(TipodeDato entrada)
{
    Nodo* nuevo;
    
    if(entrada!=-1)
    {nuevo=new Nodo(entrada);
    nuevo->ponerEnlace(primero);//enlaza nuevo con primero
    primero=nuevo; //mueve primero y apunta al nuevo nodo
    }
}
void Lista::visualizarLista()
{
    Nodo* n;
    
    n=primero;
      while(n!=NULL)
      { 
         cout<<n->DatoNodo()<<"\t ";
         n=n->enlaceNodo();    
      }
      cout<<"\n ";
}
