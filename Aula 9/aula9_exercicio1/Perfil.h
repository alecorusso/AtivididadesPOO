#ifndef PERFIL_H
#define PERFIL_H

#include <string>
#include "Postagem.h"

class Perfil{
    private:
        string nome;
        int quantidade = 0;
        int maximoDePostagens;
        Postagem** postagens;

    public:
        Perfil(string nome, int maximoDePostagens);
        Perfil(string nome, Postagem** postagens, int quantidade);
        virtual ~Perfil();
        int getTotalDeVisualizacoes();
        bool postar(Postagem *p);
        void imprimir();
        string getNome();
        int getQuantidade();
        Postagem** getPostagens();
        
};

#endif