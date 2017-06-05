#include<iostream>
#include<string>
#include<conio.h>
#include <stdlib.h>

//Funcionario
using namespace std;
      class funcionario {
      private:
      string nome, sobrenome;
      string login, senha;
      int cargo;
      public:
      funcionario() {
      nome="";
      sobrenome="";
      login="";
      senha="";
      }

	  string getNome(){
      	return nome;
      }

	  void setNome(string n){
      	nome=n;
      }

	  string getSobrenome(){
      	return sobrenome;
      }

	  void setSobrenome(string n){
      	sobrenome=n;
      }

	  string getLogin(){
      	return login;
	  }

	  void setLogin(string n) {
	  	login=n;
	  }

	  string getSenha(){
      	return senha;
      }

	  void setSenha(string n){
      	senha=n;
      }

      int getCargo() {
      	return cargo;
	  }

	  void setCargo(int x) {
	  	cargo=x;
	  }
    };


using namespace std;

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
	funcionario e1;
      string gets();
      void print();

      int main() {

      	int cargo;
      	char op;
      	int i;
      	int ing;

      cout <<"Digite o nome: " << endl;
      e1.setNome(gets());
      cout << endl;

	  cout <<"Digite o sobrenome: " << endl;
      e1.setSobrenome(gets());
      cout << endl;

	  cout <<"Digite o login do usuario: " << endl;
      e1.setLogin(gets());
      cout << endl;

	  cout << "Digite a senha do usuario: " << endl;
      e1.setSenha(gets());
      cout << endl;

      cout << "1.Funcionario\n2.Gerente\nDigite o cargo do usuario: " << endl;
      cin >> cargo;
	  e1.setCargo(cargo);
	  cout << endl;
      	if(cargo == 1) {
      		cout << "Funcionario";
		  }
		  else
		  	cout << "Gerente";

   	  print();
   	  Ingresso umIngresso;

		umIngresso.inicializa(1);
		umIngresso.tipos(1);
        umIngresso.valores(0);
		umIngresso.formapgto(1);
		getch();
		system("cls");
		cout << "Vendedor: " << e1.getNome() << endl;
		umIngresso.poltrona();
		umIngresso.resumo(0,0,0);
		cout << endl;
		cout << "Compra realizada com sucesso! Deseja comprar outro ingresso? (y,n)\n";
		cin >> op;
		if (op == 'y') {
            cout << endl;
            cout << "Quantos ingressos ainda deseja comprar? " << endl;
            getch();
            cin >> ing;
            system ("cls");
            for(i = 0; i < ing; i++) {
            umIngresso.inicializa(0);
            umIngresso.tipos(1);
            umIngresso.valores(0);
            umIngresso.formapgto(1);
            getch();
        cout << endl;
		cout << "Vendedor: " << e1.getNome() << endl;
		umIngresso.poltrona();
		umIngresso.resumo(0,0,0);
		cout << endl;

		getch();
            }
            cout << endl;
            cout << "Obrigado e volte sempre.";

        } else if (op == 'n') {
            cout << "Obrigado e volte sempre.";
            return 0;
        }
        else {
            cout << "Obrigado e volte sempre.";
            }
            return 0;
		getch();
   	}
      string gets(){
      string n;
      cin>>n;
      return n;
      }

      void print() {
      system("cls");
      cout <<"Nome do usuario: "<< e1.getNome();
      cout <<"\nSobrenome do usuario: "<< e1.getSobrenome();
      cout <<"\nLogin do usuario: "<< e1.getLogin();
      cout <<"\nSenha do usuario: "<< e1.getSenha();
      if(e1.getCargo() == 1) cout << "\nCargo do usuario: Funcionario"; else cout << "\nCargo do usuario: Gerente";
      cout << endl;
      cout << endl;
      cout << "Pressione qualquer tecla para continuar...";
      getch();
      system("cls");


      }
