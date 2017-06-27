#include "Ingresso.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Ingresso::Ingresso()
{
    //ctor
}

Ingresso::~Ingresso()
{
    //dtor
}
int Ingresso::getIdIngresso()
{
    return idIngresso;
}
char* Ingresso::getFormaPgt()
{
    return formaPgt;
}
char* Ingresso::getTipo()
{
    return tipo;
}
int Ingresso::getIdSessao()
{
    return idSessao;
}
int Ingresso::getIdFuncionario()
{
    return idFuncionario;
}
int Ingresso::getIdPoltrona()
{
    return idPoltrona;
}
void Ingresso::setIdIngresso(int idI)
{
    idIngresso=idI;
}
void Ingresso::setFormaPgt(char* f)
{
    formaPgt=f;
}
void Ingresso::setTipo(char* t)
{
    tipo=t;
}
void Ingresso::setIdSessao(int idS)
{
    idSessao=idS;
}
void Ingresso::setFuncionario(int idF)
{
    idFuncionario=idF;
}
void Ingresso::setIdPoltrona(int idP)
{
    idPoltrona=idP;
}


