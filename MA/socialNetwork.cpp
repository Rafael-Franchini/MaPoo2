#include "socialNetwork.h"

socialNetwork::socialNetwork(string nome) {
	time_t agora;
	time(&agora);
	tm* dataHora = localtime(&agora);
	string dataFormatada = to_string(dataHora->tm_mday) + "/" + to_string(dataHora->tm_mon) + "/" + to_string(dataHora->tm_year);
	this->Data.push_back(dataFormatada);
	this->Nome = nome;
}

void socialNetwork::setNome(string nome) {
	this->Nome = nome;
}

string socialNetwork::getNome() {
	return this->Nome;
}

void socialNetwork::deletarPost(int cod) {
	for (int i = 0; i < Posts.size();i++) {
		if (this->Posts[i]->getCodigo() == cod) {
			this->Posts.erase(this->Posts.begin() + i);
		}
	}

}

void socialNetwork::postar(Post* post) {
	this->Posts.push_back(post);
}