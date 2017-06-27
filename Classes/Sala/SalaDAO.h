//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_SALADAO_H
#define CINEMAPOOC_SALADAO_H

#include "Sala.h"
#include <stdio.h>
#include <string.h>
class SalaDAO : public Sala{
public:
	SalaDAO(){
		
	}
    int cadastrar();
    int alterar();
    int remover();

private:
    void setQueryInsert(char query[]);
    void setQueryUpdate(char query[]);
    void setQueryDelete(char query[]);
};


#endif //CINEMAPOOC_SALADAO_H
