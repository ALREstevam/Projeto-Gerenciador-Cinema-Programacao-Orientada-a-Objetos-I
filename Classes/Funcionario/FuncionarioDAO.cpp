//
// Created by andre on 26/06/2017.
//

#include "FuncionarioDAO.h"

void FuncionarioDAO::setQueryInsert(char* query)
{

    static const char* queryBegin="INSERT INTO FUNCIONARIO VALUES (";
    static const char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*50);
    char *arg2=(char*)malloc(sizeof(char)*50);
    char *arg3=(char*)malloc(sizeof(char)*50);
    char *arg4=(char*)malloc(sizeof(char)*50);
    char *arg5=(char*)malloc(sizeof(char)*50);

    sprintf(arg1, "%d", idFuncionario);
    sprintf(arg2, "'%s'", nome);
    sprintf(arg3, "'%s'", login);
    sprintf(arg4, "'%s'", senha);
    sprintf(arg5, "'%s'", tipo);

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
void FuncionarioDAO::setQueryUpdate(char* query)
{
    static const char* queryBegin="UPDATE FUNCIONARIO SET";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*50);
    char *arg2=(char*)malloc(sizeof(char)*50);
    char *arg3=(char*)malloc(sizeof(char)*50);
    char *arg4=(char*)malloc(sizeof(char)*50);
    char *arg5=(char*)malloc(sizeof(char)*50);


    sprintf(arg1, " NOME ='%s'", nome);
    sprintf(arg2, " LOGIN ='%s'", login);
    sprintf(arg3, " SENHA ='%s'", senha);
    sprintf(arg4, " TIPO ='%s'", tipo);
    sprintf(arg5, " WHERE ID_FUNCIONARIO =%d", idFuncionario);


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
void FuncionarioDAO::setQueryDelete(char* query)
{

    static const char* queryBegin="DELETE FROM FUNCIONARIO WHERE ID_FUNCIONARIO =";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idFuncionario);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);

}
int FuncionarioDAO::cadastrar()
{

    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int FuncionarioDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int FuncionarioDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}
