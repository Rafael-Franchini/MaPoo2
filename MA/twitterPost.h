#ifndef _twitterPost_h_
#define _twitterPost_h_
#include"post.h"
#include <string>
#include <iostream>
using namespace std;

class TwitterPost : public Post {
public:
    TwitterPost(int codigo, const  string& descricao);

    void compartilhar() ;
};

#endif