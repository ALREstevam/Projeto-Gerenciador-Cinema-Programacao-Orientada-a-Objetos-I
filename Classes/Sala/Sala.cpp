#include "Sala.h"
#include <stdio.h>
#include <string.h>



Sala::Sala()
{
    //ctor
}
Sala::~Sala()
{
    //dtor
}
int Sala::getId()
{
    return id;
}
char* Sala::getTipo()
{
    return tipo;
}
int Sala::getNumPoltronas()
{
    return numPoltronas;
}
void Sala::setId(int i)
{
        id=i;
}
void Sala::setTipo(char* t)
{
    tipo=t;
}
void Sala::setNumPoltronas(int np)
{
    numPoltronas=np;
}






