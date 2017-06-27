#ifndef SALA_H
#define SALA_H
#include "../bancoCinema.h"


class Sala
{
    public:
        Sala();
        virtual ~Sala();
        int getId();
        char* getTipo();
        int getNumPoltronas();
        void setId(int i);
        void setTipo(char* t);
        void setNumPoltronas(int np);

    protected:
        int id;
        char *tipo;
        int numPoltronas;

};

#endif // SALA_H
