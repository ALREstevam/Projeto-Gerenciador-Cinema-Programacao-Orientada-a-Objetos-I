//
// Created by andre on 26/06/2017.
//

#include "SalaDAO.h"

void SalaDAO::setQueryInsert(char query[])
{
    const static char* queryBegin="INSERT INTO SALA VALUES (";
    const static char* queryEnd=");";
    char arg1[25];
    char arg2[25];
    char arg3[25];

    sprintf(arg1, "%d", id);
    sprintf(arg2, "'%s'", tipo);
    sprintf(arg3, "%d", numPoltronas);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,queryEnd);
}
void SalaDAO::setQueryUpdate(char query[])
{
    const static char* queryBegin="UPDATE SALA SET";
    const static char* queryEnd=";";
    char arg1[25];
    char arg2[25];
    char arg3[25];

    sprintf(arg2, " TIPO ='%s'", tipo);
    sprintf(arg3, " NUMPOLTRONAS = %d", numPoltronas);
    sprintf(arg1, " WHERE ID_SALA = %d", id);

    strcpy(query,queryBegin);
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,arg1);
    strcat(query,queryEnd);
}
void SalaDAO::setQueryDelete(char query[])
{
    const static char* queryBegin="DELETE FROM SALA WHERE ID_SALA =";
    const static char* queryEnd=";";
    char arg1[25];
    sprintf(arg1, " %d", id);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);
}
int SalaDAO::cadastrar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int SalaDAO::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int SalaDAO::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}