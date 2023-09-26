#ifndef _socialNetwork_h
#define _socialNetwork_h
#include"post.h"	
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class socialNetwork {
private:
	string Nome;
	vector<string> Data;
	vector<Post*> Posts;
public:
	socialNetwork(string nome);
	string getNome();
	void setNome(string nome);
	void postar(Post* post);
	void deletarPost(int cod);
};

#endif // !_socialNetwork_h
