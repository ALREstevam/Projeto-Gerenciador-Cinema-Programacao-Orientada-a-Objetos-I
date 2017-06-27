///////////.h////////////////
#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;

class DatetimeControl
{
public:
    DatetimeControl();
    DatetimeControl(int diaSemana, int mes, int ano, int hora, int minuto);
    void setDiaSemana(int diaSemana);
    int getDiaSemana();
    void setMes(int mes);
    int getMes();
    void setAno(int ano);
    int getAno();
    void setHora(int hora);
    int getHora();
    void setMinuto(int minuto);
    int getMinuto();
	int comparar_datas(DatetimeControl dt);
private:
    int diaSemana;
    int mes;
    int ano;
    int hora;
    int minuto;
};

#endif

