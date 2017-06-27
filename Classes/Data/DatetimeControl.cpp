//////////////.cpp/////////////
#include "DatetimeControl.h"

DatetimeControl::DatetimeControl()
{
	diaSemana = 0;
	mes = 0;
	ano = 0;
	hora = 0;
	minuto = 0;
}
DatetimeControl::DatetimeControl(int diaSemana, int mes, int ano, int hora, int minuto) {
	this->diaSemana = diaSemana;
	this->mes = mes;
	this->ano = ano;
	this->hora = hora;
	this->minuto = minuto;
}

void DatetimeControl::setDiaSemana(int diaSemana) {
	this->diaSemana = diaSemana;
}
int DatetimeControl::getDiaSemana() {
	return diaSemana;
}

void DatetimeControl::setMes(int mes) {
	this->mes = mes;
}
int DatetimeControl::getMes() {
	return mes;
}
void DatetimeControl::setAno(int ano) {
	this->ano = ano;
}
int DatetimeControl::getAno() {
	return ano;
}
void DatetimeControl::setHora(int hora) {
	this->hora = hora;
}
int DatetimeControl::getHora() {
	return hora;
}
void DatetimeControl::setMinuto(int minuto) {
	this->minuto = minuto;
}
int DatetimeControl::getMinuto() {
	return minuto;
}
/*
int DatetimeControl::comparar_datas(DateTimeControl dt){
	return 0;
}
*/






