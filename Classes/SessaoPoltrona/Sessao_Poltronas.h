#ifndef SESSAO_POLTRONAS_H
#define SESSAO_POLTRONAS_H
#include "../bancoCinema.h"

class Sessao_Poltronas
{
    public:
        Sessao_Poltronas();
        virtual ~Sessao_Poltronas();
        int getIdSessaoPoltronas();
        int getIdSessao();
        int getIdPoltrona();
        void setIdSessaoPoltronas(int idSp);
        void setIdSessao(int idS);
        void setIdPoltrona(int idP);

    protected:
        int idSessaoPoltronas;
        int idSessao;
        int idPoltrona;

};

#endif // SESSAO_POLTRONAS_H
