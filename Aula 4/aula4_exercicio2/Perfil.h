#ifndef PERFIL_H
#define PERFIL_H

#define MAXIMO_POSTAGENS 12

#include "Postagem.h"
#include <string>

using namespace std;

class Perfil {
    private:
        string nome;
        Postagem *posts[MAXIMO_POSTAGENS];
        int quantidade = 0;

    public:
        int getTotalDeVisualizacoes();
        void imprimir();
        bool postar(Postagem* p);
        string getNome();
        void setNome(string nome);
        int getQuantidade();
        Postagem** getPostagens();
};

#endif