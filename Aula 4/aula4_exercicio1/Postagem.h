#ifndef POSTAGEM_H
#define POSTAGEM_H

#include <string>

using namespace std;

class Postagem {
    public:
        string legenda;
        int visualizacoes = 0;

        void assistir ();
        void imprimir ();
};

#endif