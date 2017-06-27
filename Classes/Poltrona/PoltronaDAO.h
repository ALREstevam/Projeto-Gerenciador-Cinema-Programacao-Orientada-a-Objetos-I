//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_POLTRONADAO_H
#define CINEMAPOOC_POLTRONADAO_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Poltrona.h"
class PoltronaDAO : public Poltrona{
public:
	PoltronaDAO(){
		
	}
    int cadastrar();
    int alterar();
    int remover();

private:
    void setQueryInsert(char *query);
    void setQueryUpdate(char *query);
    void setQueryDelete(char *query);
};


#endif //CINEMAPOOC_POLTRONADAO_H
