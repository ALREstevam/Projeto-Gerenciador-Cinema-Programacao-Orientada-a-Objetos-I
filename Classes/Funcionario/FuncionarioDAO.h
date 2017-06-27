//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_FUNCIONARIODAO_H
#define CINEMAPOOC_FUNCIONARIODAO_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "Funcionario.h"
class FuncionarioDAO : public Funcionario{
public:
	FuncionarioDAO(){
		
	}
    int cadastrar();
    int alterar();
    int remover();

private:
    void setQueryInsert(char *query);
    void setQueryUpdate(char *query);
    void setQueryDelete(char *query);
};


#endif //CINEMAPOOC_FUNCIONARIODAO_H
