#ifndef COORDENADAPOLTRONA_H
#define COORDENADAPOLTRONA_H
#include "../bancoCinema.h"


class CoordenadaPoltrona
{
    public:
        CoordenadaPoltrona();
        virtual ~CoordenadaPoltrona();
        int getIdCoordenadaPoltrona();
        int getPoltronaFileira();
        int getPoltronaColuna();
        void setIdCoordenadaPoltrona(int idC);
        void setPoltronaFileira(int f);
        void setPoltronaColuna(int c);


    protected:
        int idCoordenadaPoltrona;
        int poltronaFileira;
        int poltronaColuna;

};

#endif // COORDENADAPOLTRONA_H
