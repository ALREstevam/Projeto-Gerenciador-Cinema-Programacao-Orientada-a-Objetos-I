#include "Poltrona.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Poltrona::Poltrona()
{
    //ctor
}

Poltrona::~Poltrona()
{
    //dtor
}
int Poltrona::getIdPoltrona()
{
    return idPoltrona;
}
int Poltrona::getNumPoltrona()
{
    return numPoltrona;
}
int Poltrona::getEstadoOcupada()
{
    return estadoOcupada;
}
int Poltrona::getIdCoordenada()
{
    return idCoordenada;
}
void Poltrona::setIdPoltrona(int idP)
{
    idPoltrona=idP;
}
void Poltrona::setNumPoltrona(int nP)
{
    numPoltrona=nP;
}
void Poltrona::setEstadoOcupada(int e)
{
    estadoOcupada=e;
}
void Poltrona::setIdCoordenada(int idC)
{
    idCoordenada=idC;
}
