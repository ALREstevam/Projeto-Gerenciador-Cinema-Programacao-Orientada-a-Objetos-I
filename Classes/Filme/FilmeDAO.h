//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_FILMEDAO_H
#define CINEMAPOOC_FILMEDAO_H


#include "Filme.h"

class FilmeDAO : public Filme{
public:
	FilmeDAO(){
		
	}
    int cadastrar();
    int alterar();
    int remover();

private:
    void setQueryInsert(char* query);
    void setQueryUpdate(char* query);
    void setQueryDelete(char* query);

};


#endif //CINEMAPOOC_FILMEDAO_H
