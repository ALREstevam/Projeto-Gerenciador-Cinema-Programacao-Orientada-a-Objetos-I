#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "../bancoCinema.h"


class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        int getIdFuncionario();
        char* getNome();
        char* getLogin();
        char* getSenha();
        char* getTipo();
        void setIdFuncionario(int idF);
        void setNome(char* n);
        void setLogin(char* l);
        void setSenha(char* s);
        void setTipo(char* t);

    protected:
        int idFuncionario;
        char* nome;
        char* login;
        char* senha;
        char* tipo;

};

#endif // FUNCIONARIO_H
