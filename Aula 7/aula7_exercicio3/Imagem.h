#ifndef IMAGEM_H
#define IMAGEM_H

#include "Conteudo.h"

class Imagem : public Conteudo{
    public:
        Imagem(string legenda);
        virtual ~Imagem();
};

#endif