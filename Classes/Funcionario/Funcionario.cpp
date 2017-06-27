#include "Funcionario.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}
int Funcionario::getIdFuncionario()
{
    return idFuncionario;
}
char* Funcionario::getNome()
{
    return nome;
}
char* Funcionario::getLogin()
{
    return login;
}
char* Funcionario::getSenha()
{
    return senha;
}
char* Funcionario::getTipo()
{
    return tipo;
}
void Funcionario::setIdFuncionario(int idF)
{
    idFuncionario=idF;
}
void Funcionario::setNome(char* n)
{
    nome=n;
}
void Funcionario::setLogin(char* l)
{
    login=l;
}
void Funcionario::setSenha(char* s)
{
    senha=s;
}
void Funcionario::setTipo(char* t)
{
    tipo=t;
}


