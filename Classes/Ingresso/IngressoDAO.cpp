//
// Created by andre on 26/06/2017.
//

#include "IngressoDAO.h"


void IngressoDAO::setQueryInsert(char* query)
{
    static const char* queryBegin = "INSERT INTO INGRESSO VALUES (";
    static const  char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*50);
    char *arg2=(char*)malloc(sizeof(char)*50);
    char *arg3=(char*)malloc(sizeof(char)*50);
    char *arg4=(char*)malloc(sizeof(char)*50);
    char *arg5=(char*)malloc(sizeof(char)*50);
    char *arg6=(char*)malloc(sizeof(char)*50);

    sprintf(arg1, "%d", idIngresso);
    sprintf(arg2, "'%s'", formaPgt);
    sprintf(arg3, "'%s'", tipo);
    sprintf(arg4, "%d", idSessao);
    sprintf(arg5, "%d", idFuncionario);
    sprintf(arg6, "%d", idPoltrona);

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
    strcat(query,",");
    strcat(query,arg6);
    strcat(query,queryEnd);

    free(arg1);
    free(arg2);
    free(arg3);
    free(arg4);
    free(arg5);
    free(arg6);

}
void IngressoDAO::setQueryUpdate(char* query)
{
    //char *query;
    static const char* queryBegin="UPDATE INGRESSO SET";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*50);
    char *arg2=(char*)malloc(sizeof(char)*50);
    char *arg3=(char*)malloc(sizeof(char)*50);
    char *arg4=(char*)malloc(sizeof(char)*50);
    char *arg5=(char*)malloc(sizeof(char)*50);
    char *arg6=(char*)malloc(sizeof(char)*50);


    sprintf(arg1, " FORMAPGTO ='%s'", formaPgt);
    sprintf(arg2, " TIPO ='%s'", tipo);
    sprintf(arg3, " ID_SESSAO =%d", idSessao);
    sprintf(arg4, " ID_FUNCIONARIO =%d", idFuncionario);
    sprintf(arg5, " ID_POLTRONA =%d", idPoltrona);
    sprintf(arg6, " WHERE ID_INGRESSO =%d", idIngresso);

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
    strcat(query,arg6);

    strcat(query,queryEnd);
    free(arg1);
    free(arg2);
    free(arg3);
    free(arg4);
    free(arg5);
    free(arg6);

}
void IngressoDAO::setQueryDelete(char* query)
{
    //char *query;
    static const char* queryBegin="DELETE FROM INGRESSO WHERE ID_INGRESSO =";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idIngresso);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);

}
int IngressoDAO::cadastrar()
{

    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int IngressoDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int IngressoDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}