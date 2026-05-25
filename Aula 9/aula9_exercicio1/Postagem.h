#ifndef POSTAGEM_H
#define POSTAGEM_H

#include <string>

using namespace std;

class Postagem {
    protected:
        string legenda;

    public:
        Postagem(string legenda);
        virtual ~Postagem();
        virtual void imprimir() = 0;
        string getLegenda();
        virtual int getVisualizacoes() = 0;

};

#endif