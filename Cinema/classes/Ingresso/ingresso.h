#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>

using namespace std;

//Ingresso
	class Ingresso {
		private:
		int dia;
		char *formapgto;
		char *tipo;
		int valortotal;

		public:
		Sessao();
        virtual ~Sessao();
      	int getDia();
        int getFormaPgto();
        int getTipo();
        int getValorTotal();
        void setDia(int d);
        void setFormaPgto(char *fp);
        void setTipo(char *t);
        void setValorTotal(int vt);
		
	};

