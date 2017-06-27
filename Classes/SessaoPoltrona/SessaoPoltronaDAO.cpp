//
// Created by andre on 26/06/2017.
//

#include "SessaoPoltronaDAO.h"

void SessaoPoltronaDAO::setQueryInsert(char* query)
{
    static const char* queryBegin="INSERT INTO SESSAO_POLTRONAS VALUES (";
    static const char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);

    sprintf(arg1, "%d", idSessaoPoltronas);
    sprintf(arg2, "%d", idSessao);
    sprintf(arg3, "%d", idPoltrona);

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
void SessaoPoltronaDAO::setQueryUpdate(char *query)
{
    static const char* queryBegin="UPDATE SESSAO_POLTRONAS SET";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);


    sprintf(arg1, " ID_SESSAO =%d", idSessao);
    sprintf(arg2, " ID_POLTRONA =%d", idPoltrona);
    sprintf(arg3, " WHERE ID_SESSAOPOLTRONAS =%d", idSessaoPoltronas);

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
void SessaoPoltronaDAO::setQueryDelete(char* query)
{
    static const char* queryBegin="DELETE FROM SESSAO_POLTRONAS WHERE ID_SESSAOPOLTRONAS =";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idSessaoPoltronas);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);
}
int SessaoPoltronaDAO::cadastrar()
{

    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int SessaoPoltronaDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int SessaoPoltronaDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}