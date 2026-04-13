#ifndef POSTAGEM_H
#define POSTAGEM_H

#include <string>

using namespace std;

class Postagem {
    private:
        string legenda;
        int visualizacoes = 0;

    public:
        Postagem(string legenda);
        void assistir();
        void imprimir();
        string getLegenda();
        void setLegenda(string legenda);
        int getVisualizacoes();
};

#endif