#include "Sessao_Poltronas.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Sessao_Poltronas::Sessao_Poltronas()
{
    //ctor
}

Sessao_Poltronas::~Sessao_Poltronas()
{
    //dtor
}
int Sessao_Poltronas::getIdSessaoPoltronas()
{
    return idSessaoPoltronas;
}
int Sessao_Poltronas::getIdSessao()
{
    return idSessao;
}
int Sessao_Poltronas::getIdPoltrona()
{
    return idPoltrona;
}
void Sessao_Poltronas::setIdSessaoPoltronas(int idSP)
{
    idSessaoPoltronas=idSP;
}
void Sessao_Poltronas::setIdSessao(int idS)
{
    idSessao=idS;
}
void Sessao_Poltronas::setIdPoltrona(int idP)
{
    idPoltrona=idP;
}


