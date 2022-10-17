typedef int TipodeDato;
//archivo cabecera Nodo.h
class Nodo
{
private:
    TipodeDato dato;
    Nodo* enlace; //apuntador al objeto dinámico de la clase nodo
public:
    Nodo(TipodeDato t)
    {
        dato=t;
        enlace=0; // 0 es el puntero NULL en C++
    }
    //Crea el nodo y lo enlaza a n
    Nodo(TipodeDato p, Nodo* n)
    {
        dato=p;
        enlace=n;
    }
    TipodeDato DatoNodo() const
    {
        return dato;
    }
    Nodo* enlaceNodo() const
    {
        return enlace;
    }
    void ponerEnlace(Nodo* sgte)
    {
        enlace=sgte;
    }
};

