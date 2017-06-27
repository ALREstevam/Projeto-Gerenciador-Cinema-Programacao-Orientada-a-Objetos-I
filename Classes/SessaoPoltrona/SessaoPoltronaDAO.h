//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_SESSAOPOLTRONADAO_H
#define CINEMAPOOC_SESSAOPOLTRONADAO_H

#include "Sessao_Poltronas.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class SessaoPoltronaDAO : public Sessao_Poltronas{
public:
	SessaoPoltronaDAO(){
		
	}
    int cadastrar();
    int alterar();
    int remover();

private:
    void setQueryInsert(char* query);
    void setQueryUpdate(char* query);
    void setQueryDelete(char* query);
};


#endif //CINEMAPOOC_SESSAOPOLTRONADAO_H
