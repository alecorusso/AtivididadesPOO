#ifndef VIDEO_H
#define VIDEO_H

#include "Conteudo.h"

class Video : public Conteudo {
    private:
        int duracao;

    public :
        Video(string legenda, int duracao);
        virtual ~Video();
        int getDuracao();
        void assistir(int tempo);
};

#endif