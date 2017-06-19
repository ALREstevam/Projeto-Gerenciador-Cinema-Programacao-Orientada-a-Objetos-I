#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>

	Sessao::Sessao() {
	}
	
	Sessao::~Sessao() {
	}


	void Ingresso::getDia() {

		return dia;
	}

	void Ingresso::getFormaPgto() {

		return formapgto;

	}

	int Ingresso::getTipo() {


		return tipo;

	int Ingresso::getValorTotal() {

		return valortotal;
	}
	
	
	void Ingresso::setDia(int d) {

		dia = d;
	}

	void Ingresso::setFormaPgto(char *fp) {

		formapgto = fp;
	}

	int Ingresso::setTipo(char *t) {

		tipo = t;
	}

	int Ingresso::setValorTotal(int vt) {

		valortotal = vt;
	}
	
	//Ingresso BD
	void Sala::setQueryInsert(char query[]) {
    //char *query;
    char* queryBegin="INSERT INTO INGRESSO VALUES (";
    char* queryEnd=");";
    char arg1[25];
    char arg2[25];
    char arg3[25];
    char arg4[25];

    sprintf(arg1, "%d", dia);
    sprintf(arg2, "%d", formapgto);
    sprintf(arg3, "%d", tipo);
    sprintf(arg4, "%d", valortotal);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,",");
    strcat(query,arg4);
    strcat(query,",");
    strcat(query,queryEnd);

    //printf("%s",query);
    //return query;
	}



        
    return 0;
}
