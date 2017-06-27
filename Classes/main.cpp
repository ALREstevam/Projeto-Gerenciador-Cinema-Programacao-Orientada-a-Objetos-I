#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
//#include "sqlite3/sqlite3.h"
#include <stdio.h>
#include <string.h>
#include "Sessao/SessaoDAO.h"
#include "Sala/Sala.h"
#include "Sessao/Sessao.h"
#include "SessaoPoltrona/Sessao_Poltronas.h"
#include "SessaoPoltrona/SessaoPoltronaDAO.h"
#include "Poltrona/Poltrona.h"
#include "Coordenada/CoordenadaPoltrona.h"
#include "Filme/Filme.h"
#include "Funcionario/Funcionario.h"
#include "Ingresso/Ingresso.h"
#include "Sala/SalaDAO.h"
#include "Coordenada/CoordenadaPoltronaDAO.h"
#include "Data/DatetimeControl.h"
#include "Filme/FilmeDAO.h"
#include "Funcionario/FuncionarioDAO.h"
#include "Ingresso/IngressoDAO.h"
#include "Poltrona/PoltronaDAO.h"




using namespace std;

int arrayTeste[10];
char*** queryResult2;
int cara=0;
static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;

    queryResult2=(char***)realloc(queryResult2,((sizeof (char**))*(cara+1)));
    queryResult2[cara]=(char**)malloc((sizeof (char*))*(argc));
    char** aux=(char**)malloc((sizeof (char*))*(argc));
    for(i=0;i<argc;i++)
    {
        aux[i]=(char*)malloc((sizeof (char))*(50));
        strcpy(aux[i],argv[i]);
        queryResult2[cara][i]=aux[i];
        printf("cpr = %s  %d!!\n", queryResult2[cara][i],cara);
    }

    cara++;
   return 0;
}
int main(int argc, char* argv[])
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;

   const char* data = "Callback function called";

   // Open database 
   rc = sqlite3_open("db.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }
   
    SalaDAO salaDao = SalaDAO();
    
    
    salaDao.setId(1);
    salaDao.setTipo("1");
    salaDao.setNumPoltronas(50);

    salaDao.cadastrar();
    salaDao.setId(2);
    salaDao.cadastrar();
    salaDao.setId(3);
    salaDao.cadastrar();

    SessaoDAO sessaoDao= SessaoDAO();
    sessaoDao.setIdSessao(29);
    sessaoDao.setPrecoBase(17.5f);
    sessaoDao.setIdSala(7);
    sessaoDao.setIdFilme(7);
    sessaoDao.setData("2017/07/25-18:00");
    sessaoDao.cadastrar();

    SessaoPoltronaDAO sessaoPoltronasDao = SessaoPoltronaDAO();
    
	sessaoPoltronasDao.setIdSessaoPoltronas(1);
    sessaoPoltronasDao.setIdSessao(2);
    sessaoPoltronasDao.setIdPoltrona(2);
    sessaoPoltronasDao.alterar();

    PoltronaDAO poltronaDao= PoltronaDAO();
    poltronaDao.setIdPoltrona(1);
    poltronaDao.setNumPoltrona(7);
    poltronaDao.setEstadoOcupada(0);
    poltronaDao.setIdCoordenada(1);
    poltronaDao.remover();

    CoordenadaPoltronaDAO coordenadaPoltronaDao = CoordenadaPoltronaDAO();
    coordenadaPoltronaDao.setIdCoordenadaPoltrona(2);
    coordenadaPoltronaDao.setPoltronaFileira(7);
    coordenadaPoltronaDao.setPoltronaColuna(7);
    coordenadaPoltronaDao.remover();

    FilmeDAO filmeDao = FilmeDAO();
    filmeDao.setIdFilme(2);
    filmeDao.setNome("Choice");
    filmeDao.setDuracao(5.70f);
    filmeDao.remover();

    FuncionarioDAO funcionario = FuncionarioDAO();
    funcionario.setIdFuncionario(0);
    funcionario.setNome("Nome2");
    funcionario.setLogin("Admin1");
    funcionario.setSenha("Admin1");
    funcionario.setTipo("Bilheteria1");
    funcionario.cadastrar();
    //funcionario.remover();

    IngressoDAO ingresso= IngressoDAO();
    ingresso.setIdIngresso(2);
    ingresso.setFormaPgt("cartao23");
    ingresso.setTipo("estudante23");
    ingresso.setIdSessao(123);
    ingresso.setFuncionario(223);
    ingresso.setIdPoltrona(323);
    //ingresso.remover();

   // Create SQL statement 
   sql = "select * from INGRESSO";
   // Execute SQL statement 
   rc = sqlite3_exec(db,sql, callback, 0, &zErrMsg);
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Records created successfully\n");
   }


   // Create SQL statement 
   sql =
         "SELECT * from sessao";

    /* Execute SQL statement 
    // MODO COMO USAR O execSelectQuery:
    bancoCinema bb = bancoCinema();
    //char*** c;
    char***t;
    int l;
    int c;
    bb.execSelectQuery(sql,&t,&l,&c);

    printf("%s\n\n\n",t[0][1]);

    bb.execSelectQuery(sql,&t,&l,&c);

    //printf("%s\n",t[3][0]);

    printf("linhas=%d colunas=%d",l,c);
    */

   return 0;
}
