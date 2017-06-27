#include "Sessao.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Sessao::Sessao()
{
    //ctor
}

Sessao::~Sessao()
{
    //dtor
}
int Sessao::getIdSessao()
{
    return idSessao;
}
float Sessao::getPrecoBase()
{
    return precoBase;
}
int Sessao::getIdSala()
{
    return idSala;
}
int Sessao::getIdFilme()
{
    return idFilme;
}
char* Sessao::getData()
{
    return data;
}
void Sessao::setIdSessao(int idS)
{
    idSessao=idS;
}
void Sessao::setPrecoBase(int pb)
{
    precoBase=pb;
}
void Sessao::setIdSala(int s)
{
    idSala=s;
}
void Sessao::setIdFilme(int f)
{
    idFilme=f;
}
void Sessao::setData(char* d)
{
    data=d;
}
