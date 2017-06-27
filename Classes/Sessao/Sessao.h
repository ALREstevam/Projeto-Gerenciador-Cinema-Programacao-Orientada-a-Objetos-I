#ifndef SESSAO_H
#define SESSAO_H
#include "../bancoCinema.h"


class Sessao
{
    public:
        Sessao();
        virtual ~Sessao();
        int getIdSessao();
        float getPrecoBase();
        int getIdSala();
        int getIdFilme();
        char* getData();
        void setIdSessao(int idS);
        void setPrecoBase(int pb);
        void setIdSala(int s);
        void setIdFilme(int f);
        void setData(char* d);

    protected:
        int idSessao;
        float precoBase;
        int idSala;
        int idFilme;
        char* data;

};

#endif // SESSAO_H
