//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_SESSAODAO_H
#define CINEMAPOOC_SESSAODAO_H

#include "Sessao.h"
class SessaoDAO : public Sessao{
private:
    void setQueryUpdate(char* query);
    void setQueryDelete(char* query);

public:
    int cadastrar();
    int alterar();
    int remover();
    void setQueryInsert(char* query);

};

#endif //CINEMAPOOC_SESSAODAO_H

