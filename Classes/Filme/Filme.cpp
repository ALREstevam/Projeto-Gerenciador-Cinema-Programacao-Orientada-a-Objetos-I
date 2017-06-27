#include "Filme.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Filme::Filme()
{
    //ctor
}

Filme::~Filme()
{
    //dtor
}
int Filme::getIdFilme()
{
    return idFilme;
}
char* Filme::getNome()
{
    return nome;
}
float Filme::getDuracao()
{
    return duracao;
}
void Filme::setIdFilme(int idF)
{
    idFilme=idF;
}
void Filme::setNome(char* n)
{
    nome=n;
}
void Filme::setDuracao(float d)
{
    duracao=d;
}


