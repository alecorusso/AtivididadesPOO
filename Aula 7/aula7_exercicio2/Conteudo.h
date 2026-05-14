#ifndef CONTEUDO_H
#define CONTEUDO_H

#include "Postagem.h"

class Conteudo : public Postagem {
    public :
        Conteudo(string legenda);
        virtual ~Conteudo();
};


#endif