//
// Created by andre on 26/06/2017.
//

#include "PoltronaDAO.h"


void PoltronaDAO::setQueryInsert(char* query)
{
    static const char* queryBegin="INSERT INTO POLTRONA VALUES (";
    static const char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);
    char *arg4=(char*)malloc(sizeof(char)*25);

    sprintf(arg1, "%d", idPoltrona);
    sprintf(arg2, "%d", numPoltrona);
    sprintf(arg3, "%d", estadoOcupada);
    sprintf(arg4, "%d", idCoordenada);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,",");
    strcat(query,arg4);
    strcat(query,queryEnd);

    free(arg1);
    free(arg2);
    free(arg3);
    free(arg4);

    printf("%s",query);
}
void PoltronaDAO::setQueryUpdate(char *query)
{
    static const char* queryBegin="UPDATE POLTRONA SET";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);
    char *arg4=(char*)malloc(sizeof(char)*25);


    sprintf(arg1, " NUMPOLTRONA =%d", numPoltrona);
    sprintf(arg2, " ESTADOOCUPADA =%d", estadoOcupada);
    sprintf(arg3, " COORDENADA =%d", idCoordenada);
    sprintf(arg4, " WHERE ID_POLTRONA =%d", idPoltrona);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,arg4);
    strcat(query,queryEnd);

    printf("%s",query);
    free(arg1);
    free(arg2);
    free(arg3);
    free(arg4);
}
void PoltronaDAO::setQueryDelete(char* query)
{
    static const char* queryBegin="DELETE FROM POLTRONA WHERE ID_POLTRONA =";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idPoltrona);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);
}
int PoltronaDAO::cadastrar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int PoltronaDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int PoltronaDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}
