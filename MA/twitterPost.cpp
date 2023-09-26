#include "twitterPost.h"
#include <iostream>
using namespace std;

TwitterPost::TwitterPost(int codigo, const  string& descricao) : Post(descricao,codigo) {}

void TwitterPost::compartilhar() {
    cout << "Post compartilhado no Twitter." << endl;
}
