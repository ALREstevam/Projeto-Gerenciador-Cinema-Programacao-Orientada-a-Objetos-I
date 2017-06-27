#ifndef INGRESSO_H
#define INGRESSO_H
#include "../bancoCinema.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

class Ingresso
{
    public:
        Ingresso();
        virtual ~Ingresso();
        int getIdIngresso();
        char* getFormaPgt();
        char* getTipo();
        int getIdSessao();
        int getIdFuncionario();
        int getIdPoltrona();
        void setIdIngresso(int idI);
        void setFormaPgt(char* f);
        void setTipo(char* t);
        void setIdSessao(int idS);
        void setFuncionario(int idF);
        void setIdPoltrona(int idP);

    protected:
        int idIngresso;
        char* formaPgt;
        char* tipo;
        int idSessao;
        int idFuncionario;
        int idPoltrona;

};

#endif // INGRESSO_H
