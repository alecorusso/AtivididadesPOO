#ifndef LISTA_H
#define LISTA_H

#include "Postagem.h"
#include "Conteudo.h"
#include <string>

using namespace std;

class Lista : public Postagem {
    private:
    int tamanho;
    Conteudo **conteudos;
    int quantidade = 0;

    public:
    Lista(string legenda, int tamanho);
    virtual ~Lista();

    bool adicionar(Conteudo* c);
    void imprimir();

    Conteudo** getConteudos();
    int getQuantidade();
};

#endif