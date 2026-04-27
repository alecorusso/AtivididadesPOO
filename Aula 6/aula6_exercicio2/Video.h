#ifndef VIDEO_H
#define VIDEO_H

#include "Postagem.h"

using namespace std;

class Video : public Postagem {
    private:
    int duracao;

    public:
    Video(string legenda, int duracao);
    ~Video();

    int getDuracao();

    void assistir(int tempo);
};

#endif