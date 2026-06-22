#ifndef PERFIL_H
#define PERFIL_H

#include <string>
#include "Postagem.h"
#include <vector>

class Perfil{
    private:
        string nome;
        vector<Postagem*>* postagens;

    public:
        Perfil(string nome);
        Perfil(string nome, vector<Postagem*>* postagens);
        virtual ~Perfil();
        int getTotalDeVisualizacoes();
        void postar(Postagem *p);
        void imprimir();
        string getNome();
        vector<Postagem*>* getPostagens();
        
};

#endif