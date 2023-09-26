#ifndef _instagramPost_h
#define _instagramPost_h

#include "Post.h"

class InstagramPost : public Post {
public:
    InstagramPost(int codigo, const  string& descricao);

    void compartilhar() override;
};

#endif
