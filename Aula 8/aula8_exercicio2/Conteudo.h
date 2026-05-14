#ifndef CONTEUDO_H
#define CONTEUDO_H

#include "Postagem.h"

class Conteudo : public Postagem {
    protected :
        int visualizacoes = 0;

    public :
        Conteudo(string legenda);
        virtual ~Conteudo();
        int getVisualizacoes();
        virtual void imprimir() = 0;
        void assistir();
};


#endif