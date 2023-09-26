#include "usuario.h"
#include <ctime>

Usuario::Usuario(string nome) {
	time_t agora;
	time(&agora);
	tm *dataHora = localtime(&agora);
	string dataFormatada = to_string(dataHora->tm_mday) + "/" + to_string(dataHora->tm_mon) + "/" + to_string(dataHora->tm_year);
	this->nomeCompleto = nome;
	this->Data.push_back(dataFormatada);
}

void Usuario::setNome(string nome) {
	this->nomeCompleto = nome;
}

string Usuario::getNome() {
	return this->nomeCompleto;
}

void Usuario::descadastrar(string nomeRede) {
	for (int i = 0; i < Redes.size(); i++) {
		if (this->Redes[i]->getNome() == nomeRede) {
			this->Redes.erase(this->Redes.begin() + i);
		}
	}
}
void Usuario::cadastrar(socialNetwork* social) {
	this->Redes.push_back(social);
}

socialNetwork* Usuario::getRede(string nomeRede) {
	for (int i = 0; i < this->Redes.size(); i++) {
		if (this->Redes[i]->getNome() == nomeRede) {
			return this->Redes[i];
		}
		
	}
	return NULL;
}