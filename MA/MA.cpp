#include <iostream>
#include "usuario.h"
#include "socialNetwork.h"

using namespace std;

void menu(int &op) {
	cout << "[1] Cadastrar rede social:" << endl;
	cout << "[2] Descadastrar rede social:" << endl;
	cout << "[3] Listar redes sociais:" << endl;
	cout << "[4] Criar post";
	cout << "[5] Curtir post";
	cin >> op;
}

int main() {
	Usuario* u = new Usuario("Iago");
	int op;
	string redeSocial;

	while (true) {
		menu(op);

		switch (op) {
		case 1:
			cout << "Digite o nome da rede social: " << endl;
			cin >> redeSocial;
			socialNetwork * s = new socialNetwork(redeSocial);
			u->cadastrar(s);

			break;
		case 2:
			cout << "Digite o nome da rede social para descadastrar: " << endl;
			cin >> redeSocial;
			u->descadastrar(redeSocial);

			break;
		case 3:
			break;
		case 4:

			break;
		case 5:
			break;
		default:
			cout << "Opcao invalida!" << endl;
		}
	}

	return 0;
}