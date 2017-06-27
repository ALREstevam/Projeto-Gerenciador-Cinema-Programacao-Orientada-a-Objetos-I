#ifndef FILME_H
#define FILME_H
#include "../bancoCinema.h"


class Filme
{
    public:
        Filme();
        virtual ~Filme();
        int getIdFilme();
        char* getNome();
        float getDuracao();
        void setIdFilme(int idF);
        void setNome(char* n);
        void setDuracao(float d);


    protected:
        int idFilme;
        char* nome;
        float duracao;
};

#endif // FILME_H
