#ifndef PERFIL_H
#define PERFIL_H

#include "Postagem.h"
#include <string>

using namespace std;

class Perfil {
    public:
        string nome;
        Postagem* p1 = NULL;
        Postagem* p2 = NULL;
        int quantidade = 0;

        int getTotalDeVisualizacoes();
        void imprimir();
        bool postar(Postagem* p);
};

#endif