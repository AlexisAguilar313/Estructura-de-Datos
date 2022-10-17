# include <iostream>
using namespace std;

const int TAMPILA=49;
class PilaLineal
{
    private:
        int cima;
        int listaPila[TAMPILA];
    public:
        PilaLineal()
        {
           cima=-1;
        }
        void insertar(int elemento);
        int quitar();
        void limpiarPila();
        int cimaPila();
        bool pilaVacia();
        bool pilaLlena();   
        void mostrarPila();
};
//Implementación
void PilaLineal::insertar(int elemento)
{
    if(pilaLlena())
    {
        throw "Desbordamiento de pila";
    }
    cima++;
    listaPila[cima]=elemento;
}
int PilaLineal::quitar()
{
    int aux;
    if(pilaVacia())
    {
        throw "Pila vacía, no se puede extraer.";
    }
    aux=listaPila[cima];
    cima--;
    return aux;
}
int PilaLineal::cimaPila()
{
    if(pilaVacia())
    {
        throw "Pila vacía, no hay elementos";
    }
    return listaPila[cima];
}
bool PilaLineal::pilaVacia()
{
    return cima==-1;

}
bool PilaLineal::pilaLlena()
{
    return cima==TAMPILA-1;

}
void PilaLineal::mostrarPila()
{
    for (int i=cima;i>=0;i--)
    {
    	cout<<listaPila[i]<<" ";
    }
}
void PilaLineal::limpiarPila()
{
    cima=-1;
}
