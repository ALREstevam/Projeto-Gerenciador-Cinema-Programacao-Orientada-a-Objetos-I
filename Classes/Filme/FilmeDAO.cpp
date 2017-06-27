//
// Created by andre on 26/06/2017.
//

#include "FilmeDAO.h"
#include "Filme.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void FilmeDAO::setQueryInsert(char* query)
{
    char* queryBegin="INSERT INTO FILME VALUES (";
    char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);

    sprintf(arg1, "%d", idFilme);
    sprintf(arg2, "'%s'", nome);
    sprintf(arg3, "'%f'", duracao);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,queryEnd);

    free(arg1);
    free(arg2);
    free(arg3);
}
void FilmeDAO::setQueryUpdate(char *query)
{
    char* queryBegin="UPDATE FILME SET";
    char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);


    sprintf(arg1, " NOME ='%s'", nome);
    sprintf(arg2, " DURACAO =%f", duracao);
    sprintf(arg3, " WHERE ID_FILME =%d", idFilme);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,arg3);

    strcat(query,queryEnd);
    free(arg1);
    free(arg2);
    free(arg3);
}
void FilmeDAO::setQueryDelete(char* query)
{
    char* queryBegin="DELETE FROM FILME WHERE ID_FILME =";
    char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idFilme);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);
}
int FilmeDAO::cadastrar()
{

    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int FilmeDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int FilmeDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}
