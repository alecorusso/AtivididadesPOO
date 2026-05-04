#ifndef PERFIL_H
#define PERFIL_H

#include "Postagem.h"
#include <string>

using namespace std;

class Perfil {
    private:
        string nome;
        int maximoDePostagens;
        Postagem **posts;
        int quantidade = 0;

    public:
        Perfil(string nome, int maximoDePostagens);
        Perfil(string nome, Postagem** postagens, int quantidade);
        virtual ~Perfil();
        int getTotalDeVisualizacoes();
        void imprimir();
        bool postar(Postagem* p);
        string getNome();
        int getQuantidade();
        Postagem** getPostagens();
};

#endif