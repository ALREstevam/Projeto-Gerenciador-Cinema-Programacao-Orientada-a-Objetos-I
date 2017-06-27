//
// Created by andre on 26/06/2017.
//

#include "SessaoDAO.h"
#include <stdlib.h>
#include <string.h>
#include <cstdio>

void SessaoDAO::setQueryUpdate(char* query)
{
    //char *query;
    static const char* queryBegin="UPDATE SESSAO SET";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);
    char *arg4=(char*)malloc(sizeof(char)*25);
    char *arg5=(char*)malloc(sizeof(char)*25);


    sprintf(arg1, " PRECOBASE =%f", precoBase);
    sprintf(arg2, " ID_SALA =%d", idSala);
    sprintf(arg3, " ID_FILME =%d", idFilme);
    sprintf(arg4, " DTTIME ='%s'", data);
    sprintf(arg5, " WHERE ID_SESSAO =%d", idSessao);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,",");
    strcat(query,arg4);
    strcat(query,arg5);

    strcat(query,queryEnd);
    free(arg1);
    free(arg2);
    free(arg3);
    free(arg4);
    free(arg5);
}
void SessaoDAO::setQueryDelete(char* query)
{
    //char *query;
    static const char* queryBegin="DELETE FROM SESSAO WHERE ID_SESSAO =";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idSessao);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);
}
int SessaoDAO::cadastrar()
{

    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int SessaoDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int SessaoDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}

void SessaoDAO::setQueryInsert(char* query)
{
    //char *query;
    static const char* queryBegin="INSERT INTO SESSAO VALUES (";
    static const char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);
    char *arg4=(char*)malloc(sizeof(char)*25);
    char *arg5=(char*)malloc(sizeof(char)*25);

    sprintf(arg1, "%d", idSessao);
    sprintf(arg2, "'%f'", precoBase);
    sprintf(arg3, "%d", idSala);
    sprintf(arg4, "%d", idFilme);
    sprintf(arg5, "'%s'", data);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,",");
    strcat(query,arg4);
    strcat(query,",");
    strcat(query,arg5);
    strcat(query,queryEnd);

    free(arg1);
    free(arg2);
    free(arg3);
    free(arg4);
    free(arg5);

}
