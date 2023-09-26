#ifndef _usuario_h
#define _usuario_h
#include"socialNetwork.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Usuario {
	private:
		string nomeCompleto;
		vector<socialNetwork*> Redes;
		vector<string> Data;
	public:
		Usuario(string nome);
		string  getNome();
		void setNome(string nome);
		void cadastrar(socialNetwork * social);
		void descadastrar(string nomeRede);
		socialNetwork* getRede(string nomeRede);
};

#endif // !_usuario_h
