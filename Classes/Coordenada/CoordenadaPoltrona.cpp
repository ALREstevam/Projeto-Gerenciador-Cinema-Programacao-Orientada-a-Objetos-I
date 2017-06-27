#include "CoordenadaPoltrona.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

CoordenadaPoltrona::CoordenadaPoltrona()
{
    //ctor
}

CoordenadaPoltrona::~CoordenadaPoltrona()
{
    //dtor
}
int CoordenadaPoltrona::getIdCoordenadaPoltrona()
{
    return idCoordenadaPoltrona;
}
int CoordenadaPoltrona::getPoltronaFileira()
{
    return poltronaFileira;
}
int CoordenadaPoltrona::getPoltronaColuna()
{
    return poltronaColuna;
}
void CoordenadaPoltrona::setIdCoordenadaPoltrona(int idC)
{
    idCoordenadaPoltrona=idC;
}
void CoordenadaPoltrona::setPoltronaFileira(int f)
{
    poltronaFileira=f;
}
void CoordenadaPoltrona::setPoltronaColuna(int c)
{
    poltronaColuna=c;
}


