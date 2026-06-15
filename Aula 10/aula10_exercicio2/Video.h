#ifndef VIDEO_H
#define VIDEO_H

#include "Conteudo.h"

class Video : public Conteudo {
    private:
        int duracao;
        static double porcentagem;

    public :
        Video(string legenda, int duracao);
        Video(string legenda, int duracao, int visualizacoes);
        virtual ~Video();
        int getDuracao();
        void assistir(int tempo);
        void imprimir();
        static void setPorcentagem(double valor);
        static double getPorcentagem();

};

#endif