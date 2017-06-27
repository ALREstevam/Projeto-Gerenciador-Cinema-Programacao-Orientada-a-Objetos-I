#ifndef POLTRONA_H
#define POLTRONA_H
#include "../bancoCinema.h"


class Poltrona
{
    public:
        Poltrona();
        virtual ~Poltrona();
        int getIdPoltrona();
        int getNumPoltrona();
        int getEstadoOcupada();
        int getIdCoordenada();
        void setIdPoltrona(int idP);
        void setNumPoltrona(int nP);
        void setEstadoOcupada(int e);
        void setIdCoordenada(int idC);


    protected:
        int idPoltrona;
        int numPoltrona;
        int estadoOcupada;
        int idCoordenada;

};

#endif // POLTRONA_H
