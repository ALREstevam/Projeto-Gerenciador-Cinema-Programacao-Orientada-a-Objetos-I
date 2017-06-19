#include "Sala.h"
#include <stdio.h>
#include <string.h>

class Funcionario {
    public:
        Funcionario();
        virtual ~Funcionario();
        char* getNome();
        char* getCargo();
        char* getLogin();
        char* getSenha();
		void setNome(char *n);
        void setCargo(char *t);
        void setLogin(char *l);
        void setSenha(char *s);
        int cadastrar();
        int alterar();
        int remover();
    protected:
    private:
        char *nome;
        char *tipo;
        char *login;
        char *senha;
        int numPoltronas;
        void setQueryInsert(char query[]);
        void setQueryUpdate(char query[]);
        void setQueryDelete(char query[]);
};

