#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class funcionario {

    private:
        string nome;
        string login;
        string senha;
        string cargo;

    public:
        string& getNome() {
        return nome;
        }

        string& getLogin() {
        return login;
        }

        string& getSenha() {
        return senha;
        }

        string getCargo() {
        return cargo;
        }

        void setNome(string& nome) {
            this->nome = nome;
        }

        void setLogin(string& login) {
            this->login = login;
        }

        void setSenha(string& senha) {
            this->senha = senha;
        }

        void setCargo(string& cargo) {
            this->cargo = cargo;
        }

        friend ostream& operator<< (ostream& os, const funcionario& f) {
            os << "\n" << f.nome << "\n";
            os << f.login << endl;
            os << f.senha << endl;
            os << f.cargo << endl;
            return os;
        }

        friend istream& operator>> (istream& is, funcionario& f) {
            is >> f.nome >> f.login >> f.senha >> f.cargo;
            return is;
        }
};


char menu() {

    char op;

    cout << "Digite 1 para cadastrar um usuario" << endl;
    cout << "Digite 2 para listar os usuarios cadastrados" << endl;
    cout << "Digite 3 para comprar um ingresso" << endl;
    cout << "Digite 4 para sair\n" << endl;
    cout << "Opcao: ";
    cin >> op;
    return op;
}

int main(int argc, char *argv[]) {

    char op;

    while(true) {
        op = menu();
        if(op == '1') {
                funcionario funcionario;
                string nome;
                string login;
                string senha;
                string cargo;

                ofstream ofs("arquivo.txt", fstream::app);

            cout << "Digite o nome do usuario: " << endl;
            cin >> nome;
            cout << "Digite o login do usuario: " << endl;
            cin >> login;
            cout << "Digite a senha do usuario: " << endl;
            cin >> senha;
            cout << "Digite o cargo do funcionario: " << endl;
            cin >> cargo;
            getch();
            system("cls");

            funcionario.setNome(nome);
            funcionario.setLogin(login);
            funcionario.setSenha(senha);
            funcionario.setCargo(cargo);

            ofs << funcionario;

            ofs.close();
        } else
        if(op == '2') {
            funcionario f;
            ifstream ifs("arquivo.txt");

            if(ifs.good()) {
                while(!ifs.eof()) {

                    ifs >> f;

                cout << "Nome: " << f.getNome() << endl;
                cout << "Login: " << f.getLogin() << endl;
                cout << "Senha: " << f.getSenha() << endl;
                cout << "Cargo: " << f.getCargo() << endl;
                cout << endl;

            }
            ifs.close();
        }
        else {
            cout << "Falhou! Tente novamente!" << endl;
        }

        } else
        if(op == '3') {

        } else
        if(op == '4') {
            break;
        } else
            cout << "Opcao inexistente. Tente de novo.\n";
    }

    return 0;
}
