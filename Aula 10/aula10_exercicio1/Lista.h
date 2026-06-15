#ifndef LISTA_H
#define LISTA_H

#include "Postagem.h"
#include "Conteudo.h"
#include "Lista.h"

class Lista : public Postagem {
    private :
        Conteudo** conteudos;
        int quantidade = 0;
        int tamanho;

    public:
        Lista(string legenda, int tamanho);
        virtual ~Lista();
        void adicionar(Conteudo* c);
        void adicionar(Lista* l);
        void imprimir();
        Conteudo** getConteudos();
        int getQuantidade();
        int getDuracao();
        int getVisualizacoes();
};

#endif