//
// Created by andre on 26/06/2017.
//

#ifndef CINEMAPOOC_COORDENADAPOLTRONADAO_H
#define CINEMAPOOC_COORDENADAPOLTRONADAO_H

#include "CoordenadaPoltrona.h"

class CoordenadaPoltronaDAO : public CoordenadaPoltrona{
public:
    CoordenadaPoltronaDAO();
    int cadastrar();
    int alterar();
    int remover();
private:
    void setQueryInsert(char* query);
    void setQueryUpdate(char* query);
    void setQueryDelete(char* query);

};


#endif //CINEMAPOOC_COORDENADAPOLTRONADAO_H
