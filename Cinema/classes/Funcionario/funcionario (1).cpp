#include "Sala.h"
#include <stdio.h>
#include <string.h>

Funcionario::Funcionario() {
    //ctor
}
Funcionario::~Funcionario() {
    //dtor
}
int Sala::getNome() {
    return nome;
}
char* Sala::getCargo() {
    return cargo;
}
int Sala::getLogin() {
    return login;
}
int Sala::getSenha() {
    return senha;
}
void Sala::setNome(char* i) {
        nome = n;
}
void Sala::setCargo(char* c) {
    cargo = c;
}
void Sala::setLogin(char* l) {
    login = l;
}
void Sala::setSenha(char* s) {
	senha = s;
}
void Sala::setQueryInsert(char query[])
{
    //char *query;
    char* queryBegin="INSERT INTO FUNCIONARIO VALUES (";
    char* queryEnd=");";
    char arg1[25];
    char arg2[25];
    char arg3[25];
    char arg4[25];

    sprintf(arg1, "%s", nome);
    sprintf(arg2, "%s", cargo);
    sprintf(arg3, "%s", login);
    sprintf(arg4, "%s", senha);

    strcpy(query,queryBegin);
    strcat(query, arg1);
    strcat(query,",");
    strcat(query, arg2);
    strcat(query,",");
    strcat(query, arg3);
    strcat(query,",");
    strcat(query, arg4);
    strcat(query,",");
    strcat(query, queryEnd);

    //printf("%s",query);
    //return query;
}
void Sala::setQueryUpdate(char query[]) {
    //char *query;
    char* queryBegin="UPDATE FUNCIONARIO SET";
    char* queryEnd=";";
    char arg1[25];
    char arg2[25];
    char arg3[25];
    char arg4[25];

	sprintf(arg1, "Nome = %s", nome);
    sprintf(arg2, " Cargo = %s", cargo);
    sprintf(arg3, " Login = %s", login);
    sprintf(arg4, " Senha = %s", senha);

    strcpy(query, queryBegin);
    strcat(query, arg1);
    strcat(query,",");
    strcat(query, arg2);
    strcat(query,",");
	strcat(query, arg3);
	strcat(query,",");
	strcat(query, arg4);
    strcat(query,queryEnd);

    //printf("%s",query);
    //return query;
}
void Sala::setQueryDelete(char query[])
{
    //char *query;
    char* queryBegin="DELETE FROM FUNCIONARIO WHERE NOME FUNCIONARIO =";
    char* queryEnd=";";
    char arg1[25];
     sprintf(arg1, " %d", id);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    //printf("%s",query);
    //return query;
}
int Funcionario::cadastrar() {
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int Funcionario::alterar() {
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int Funcionario::remover() {
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}
