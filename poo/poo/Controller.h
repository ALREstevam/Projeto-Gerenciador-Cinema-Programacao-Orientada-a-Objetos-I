#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "DateTimeControl.h"
#include "Coordenada.h"
#include "Filme.h"
#include "Funcionario.h"
#include "Ingresso.h"
#include "Poltrona.h"
#include "Sala.h"
#include "Sessao.h"


#include <string>
#include <vector>

using namespace std;

#pragma once
class Controller
{
public:
	Controller() {
		for (int i = 0; i < filmeAmount; i++) {
			isFilmeValid[i] = false;
		}
		for (int i = 0; i < salaAmount; i++) {
			isSalaValid[i] = false;
		}
		for (int i = 0; i < funcionarioAmount; i++) {
			isFuncionarioValid[i] = false;
		}
		for (int i = 0; i < sessaoAmount; i++) {
			isSessaoValid[i] = false;
		}
	}
private: 
	const static int filmeAmount = 60, funcionarioAmount = 20, salaAmount = 10, sessaoAmount = 100;

	Filme filmes[filmeAmount];
	Funcionario funcionarios[funcionarioAmount];
	Sala salas[salaAmount];
	Sessao sessoes[sessaoAmount];

	bool isFilmeValid[filmeAmount];
	bool isFuncionarioValid[funcionarioAmount];
	bool isSalaValid[salaAmount];
	bool isSessaoValid[sessaoAmount];

	int filmeId[filmeAmount];
	int funcionarioId[funcionarioAmount];
	int salaId[salaAmount];
	int sessaoId[sessaoAmount];


public:
	/*************************  FILMES    *********************************/
	bool addMovie(Filme f, int id) {
		for (int i = 0; i < filmeAmount; i++){
			if (!isFilmeValid[i]) {
				filmes[i] = f;
				isFilmeValid[i] = true;
				filmeId[i] = id;
				return true;
			}
		}
		return false;
	}

	bool removeMovie(Filme f) {
		for (int i = 0; i < filmeAmount; i++) {
			if (filmes[i].getNome() == f.getNome() && isFilmeValid[i]) {
				isFilmeValid[i] = false;
				return true;
			}
		}
		return false;
	}

	bool findMovie(int id, Filme *f) {
		for (int i = 0; i < filmeAmount; i++) {
			if (filmeId[i] == id && isFilmeValid[i]) {
				*f = filmes[i];
				return true;
			}
		}
		return false;
	}

	bool editMovie(Filme f, int id) {
		for (int i = 0; i < filmeAmount; i++) {
			if (filmeId[i] == id && isFilmeValid[i]) {
				filmes[i] = f;
				return true;
			}
		}
		return false;
	}





/*************************  FUNCIONÁRIOS    *********************************/
	bool addEmployee(Funcionario f, int id) {
		
		//Verificando se login já foi usado
		for (int i = 0; i < funcionarioAmount; i++)
		{
			if (funcionarios[i].getLogin() == f.getLogin() && isFuncionarioValid[i]) {
				return false;
			}
		}

		//Adicionando ao vetor de funcionários
		for (int i = 0; i < funcionarioAmount; i++) {
			if (!isFuncionarioValid[i]) {
				funcionarios[i] = f;
				isFuncionarioValid[i] = true;
				funcionarioId[i] = id;
				return true;
			}
		}
		return false;
	}

	bool removeEmployee(Funcionario f) {
		for (int i = 0; i < funcionarioAmount; i++) {
			if (funcionarios[i].getLogin == f.getLogin && isFuncionarioValid[i]) {
				isFuncionarioValid[i] = false;
				return true;
			}
		}
		return false;
	}

	bool findEmployee(int id, Funcionario *f) {
		for (int i = 0; i < funcionarioAmount; i++) {
			if (funcionarioId[i] == id && isFuncionarioValid[i]) {
				*f = funcionarios[i];
				return true;
			}
		}
		return false;
	}

	bool editEmployee(Funcionario f, int id) {
		for (int i = 0; i < funcionarioAmount; i++) {
			if (funcionarioId[i] == id && isFuncionarioValid[i]) {
				funcionarios[i] = f;
				return true;
			}
		}
		return false;
	}

	bool loginEmployee(Funcionario f) {
		for (int i = 0; i < funcionarioAmount; i++) {
			if (funcionarios[i].getLogin() == f.getLogin() && funcionarios[i].getSenha() == f.getSenha() && isFuncionarioValid[i]) {
				return true;
			}
		}
		return false;
	}


	/*************************  SALAS    *********************************/
	bool addTheaterRoom(Sala s, int id) {
		//Adicionando ao vetor de funcionários
		for (int i = 0; i < salaAmount; i++) {
			if (!isSalaValid[i]) {
				salas[i] = s;
				isSalaValid[i] = true;
				salaId[i] = id;
				return true;
			}
		}
		return false;
	}

	bool removeTheatherRoom(Sala s) {
		for (int i = 0; i < salaAmount; i++) {
			//if (salas[i].getId == s.getId && isSalaValid[i]) {
			//	isSalaValid[i] = false;
				return true;
			//}
		}
		return false;
	}

	bool findTheatherRoom(int id, Sala *s) {
		for (int i = 0; i < salaAmount; i++) {
			if (salaId[i] == id && isSalaValid[i]) {
				*s = salas[i];
				return true;
			}
		}
		return false;
	}

	bool editTheatherRoom(Sala s, int id) {
		for (int i = 0; i < salaAmount; i++) {
			if (salaId[i] == id && isSalaValid[i]) {
				salas[i] = s;
				return true;
			}
		}
		return false;
	}
	/*************************  SESSÕES    *********************************/
	bool addMovieSession(Sessao s, int id) {

		for (int i = 0; i < sessaoAmount; i++) {
			if (!isSessaoValid[i]) {
				sessoes[i] = s;
				isSessaoValid[i] = true;
				sessaoId[i] = id;
				return true;
			}
		}
		return false;
	}

	bool removeMovieSession(Sessao s) {
		/*for (int i = 0; i < sessaoAmount; i++) {
			if () {
				isSalaValid[i] = false;
				return true;
			}
		}*/
		return false;
	}

	bool findMovieSession(int id, Sessao *s) {
		for (int i = 0; i < sessaoAmount; i++) {
			if (sessaoId[i] == id && isSessaoValid[i]) {
				*s = sessoes[i];
				return true;
			}
		}
		return false;
	}

	bool editMovieSession(Sessao s, int id) {
		for (int i = 0; i < sessaoAmount; i++) {
			if (sessaoId[i] == id && isSessaoValid[i]) {
				sessoes[i] = s;
				return true;
			}
		}
		return false;
	}



};





#endif

