#ifndef LISTA_H
#define LISTA_H

#include "Postagem.h"
#include "Conteudo.h"
#include "Lista.h"
#include <list>

class Lista : public Postagem {
    private :
        list<Conteudo*>* conteudos;

    public:
        Lista(string legenda);
        virtual ~Lista();
        void adicionar(Conteudo* c);
        void adicionar(Lista* l);
        void imprimir();
        list<Conteudo*>* getConteudos();
        int getDuracao();
        int getVisualizacoes();
};

#endif