//
// Created by andre on 26/06/2017.
//

#include "CoordenadaPoltronaDAO.h"
#include "CoordenadaPoltrona.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

CoordenadaPoltronaDAO::CoordenadaPoltronaDAO(){

}

void CoordenadaPoltronaDAO::setQueryInsert(char* query)
{
    static const char* queryBegin="INSERT INTO CoordenadaPoltronaDAO VALUES (";
    static const char* queryEnd=");";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);

    sprintf(arg1, "%d", idCoordenadaPoltrona);
    sprintf(arg2, "%d", poltronaFileira);
    sprintf(arg3, "%d", poltronaColuna);

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

    printf("%s",query);
}
void CoordenadaPoltronaDAO::setQueryUpdate(char *query)
{
    static const char* queryBegin="UPDATE CoordenadaPoltronaDAO SET";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    char *arg2=(char*)malloc(sizeof(char)*25);
    char *arg3=(char*)malloc(sizeof(char)*25);


    sprintf(arg1, " POLTRONAFILEIRA =%d", poltronaFileira);
    sprintf(arg2, " POLTRONACOLUNA =%d", poltronaColuna);
    sprintf(arg3, " WHERE ID_COORDENADA =%d", idCoordenadaPoltrona);

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
void CoordenadaPoltronaDAO::setQueryDelete(char* query)
{
    static const char* queryBegin="DELETE FROM CoordenadaPoltronaDAO WHERE ID_COORDENADA =";
    static const char* queryEnd=";";
    char *arg1=(char*)malloc(sizeof(char)*25);
    sprintf(arg1, " %d", idCoordenadaPoltrona);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    free(arg1);
}
int CoordenadaPoltronaDAO::cadastrar()
{

    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int CoordenadaPoltronaDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int CoordenadaPoltronaDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}