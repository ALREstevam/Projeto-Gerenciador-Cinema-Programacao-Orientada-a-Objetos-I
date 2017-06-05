#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <cstdio>

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
//Ingresso
	class Ingresso {
		char formaPgto;
		float valor;
		int tipo;
		float dinheiro;
		float preco;
		float troco;

		public:
		void inicializa(float x);
		void formapgto(float p);
		int tipos(int t);
		int valores(float z);
		void poltrona();
		void funcionarios(char f);
		void resumo(float p, float x, float t);
	};



//Tela ingresso
	void Ingresso::inicializa(float x) {

		cout << "1. Segunta - Quinta" << endl;
		cout << "2. Sexta - Domingo" << endl;
		cout << endl;
		cout << "Dia da semana: ";
        cin >> x;


		if (x == 1) {
            preco = 10;
		}
		if (x == 2) {
            preco = 15;
		}

        cout << endl;
	}

	void Ingresso::formapgto(float p) {

		cout << endl;
		cout << "1. Dinheiro" << endl;
		cout << "2. Cartao" << endl;
		cout << endl;
		cout << "Forma de pagamento: ";
		cin >> p;
		cout << endl;
            if (p == 1) {
                cout << "Dinheiro" << endl;
				cout << endl;
				cout << "Valor Recebido: ";
				cin >> dinheiro;
				if(dinheiro < preco) {
                    cout << "Valor insuficiente" << endl;
				}

				else {
				troco = dinheiro - preco;
				cout << "Troco: " << troco;
                cout << endl;
				}
            }
			if (p == 2) {
                cout << "Cartao" << endl;
                cout << endl;
                cout << "Valor Recebido: " << preco;
                cout << endl;
		}

		cout << endl;

	}

	int Ingresso::tipos(int t) {


		cout << "1. Inteira" << endl;
		cout << "2. Meia entrada" << endl;
		cout << endl;
		cout << "Tipo do ingresso: ";
		cin >> t;
            if (t == 1)
				preco = preco;

			if (t == 2)
				preco = preco/2;

        cout << endl;
	}

	int Ingresso::valores(float z) {

		cout << "Preco total: " << preco << endl;
	}

	void Ingresso::poltrona() {
		cout << "Poltrona escolhida: " << endl;

	}

	void Ingresso::funcionarios(char f) {

	}

	void Ingresso::resumo(float p, float x, float t) {
        if (p == 1)
            cout << "Forma de pagamento: Dinheiro" << endl;
        else
            cout << "Forma de pagamento: Cartao" << endl;
        if (t == 1) {
            cout << "Tipo do ingresso: Inteira" << endl;
            if (x == 1)
            cout << "Preco: 10 Reais" << endl;

        else
            cout << "Preco: 15 Reais" << endl;

        }
        else {
            cout << "Tipo do ingresso: Meia-entrada" << endl;
            if (x == 1)
            cout << "Preco: 5 Reais" << endl;

        else
            cout << "Preco: 7,50 Reais" << endl;

        }

	}


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
        system("cls");
        char op;
	    int i;
	    int ing;

   	  Ingresso umIngresso;

		umIngresso.inicializa(1);
		umIngresso.tipos(1);
        umIngresso.valores(0);
		umIngresso.formapgto(1);
		getch();
		system("cls");
		umIngresso.poltrona();
		umIngresso.resumo(0,0,0);
		cout << endl;
		cout << "Compra realizada com sucesso! Deseja comprar outro ingresso? (y,n)\n";
		cin >> op;
		if (op == 'y') {
            cout << endl;
            cout << "Quantos ingressos ainda deseja comprar? " << endl;
            cin >> ing;
            system ("cls");
            for(i = 0; i < ing; i++) {
            umIngresso.inicializa(0);
            umIngresso.tipos(1);
            umIngresso.valores(0);
            umIngresso.formapgto(1);
            getch();
        cout << endl;
		umIngresso.poltrona();
		umIngresso.resumo(0,0,0);
		cout << endl;
		cout << endl;

		getch();
            }
            system("cls");


        } else if (op == 'n') {
            cout << "Obrigado e volte sempre.";
            return 0;
        }
        else {
            cout << "Obrigado e volte sempre.";
            return 0;
		getch();
        }
   	}
        if(op == '4') {
            remove("arquivo.txt");
            break;
        }
    }

    return 0;
}
