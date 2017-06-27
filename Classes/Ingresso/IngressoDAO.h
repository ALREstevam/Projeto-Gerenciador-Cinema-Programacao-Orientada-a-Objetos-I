//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_INGRESSODAO_H
#define CINEMAPOOC_INGRESSODAO_H

#include "Ingresso.h"
class IngressoDAO : public Ingresso{
public:
	IngressoDAO(){
		
	}
    int cadastrar();
    int alterar();
    int remover();

private:
    void setQueryInsert(char *query);
    void setQueryUpdate(char *query);
    void setQueryDelete(char *query);
};


#endif //CINEMAPOOC_INGRESSODAO_H
