#include "bancoCinema.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>     /* realloc, free, exit, NULL */

char*** tableLocal;
int linhas=0;
int colunas=0;
static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    printf("oi");
    tableLocal=(char***)realloc(tableLocal,((sizeof (char**))*(linhas+1)));
    tableLocal[linhas]=(char**)malloc((sizeof (char*))*(argc));
    char** aux=(char**)malloc((sizeof (char*))*(argc));
    for(i=0;i<argc;i++)
    {
        aux[i]=(char*)malloc((sizeof (char))*(50));
        strcpy(aux[i],argv[i]);
        tableLocal[linhas][i]=aux[i];
        printf("cpr = %s !!\n", azColName[i]);
    }
    colunas=argc;
    linhas++;
    return 0;
}
bancoCinema::bancoCinema()
{
    //ctor
}

bancoCinema::~bancoCinema()
{
    //dtor
}
int bancoCinema::open()
{
    rc = sqlite3_open("db.db", &db);
    if( rc ){
        return(0);
    }else{
        return(1);
    }
}
int bancoCinema::execQuery(char query[])
{
    int resp=1;
    if(open())
    {
        sql =query;
       /* Execute SQL statement */

       //FREE
        linhas=0;
        colunas=0;

       rc = sqlite3_exec(db,sql, callback, 0, &zErrMsg);
       if( rc != SQLITE_OK ){
          sqlite3_free(zErrMsg);
          resp=0;
       }
    }
    else
    {
       resp=0;
    }

    sqlite3_close(db);
    return(resp);
}
int bancoCinema::execSelectQuery(char query[],char**** queryResult,int*l,int*c)
{
    int resp=1;
    if(open())
    {
       /* Execute SQL statement */
        rc = sqlite3_exec(db, query, callback, (void*)data, &zErrMsg);

        *queryResult=tableLocal;

        *l=linhas;
        *c=colunas;

        //FREE
        linhas=0;
        colunas=0;

       if( rc != SQLITE_OK ){
          fprintf(stderr, "SQL error: %s\n", zErrMsg);
          sqlite3_free(zErrMsg);
       }else{
          fprintf(stdout, "Operation done successfully\n");
       }

    }
    else
    {
       resp=0;
    }

    sqlite3_close(db);
    return(resp);
}


