#ifndef LISTA_H
#define LISTA_H

#include "Postagem.h"
#include "Video.h"
#include <string>

using namespace std;

class Lista : public Postagem {
    private:
    int tamanho;
    Video **videos;
    int quantidade = 0;

    public:
    Lista(string legenda, int tamanho);
    ~Lista();

    bool adicionar(Video* v);
    void imprimir();

    Video** getVideos();
    int getQuantidade();
};

#endif