#include "Video.h"
#include <iostream>

Video::Video(string legenda, int duracao) : Conteudo(legenda), duracao (duracao){}

Video::~Video(){
    cout << "Destruidor de vídeo com " << visualizacoes << " visualizacoes: " << legenda << endl;
}

int Video::getDuracao(){
    return duracao;
}

void Video::assistir(int tempo){
    if(tempo >= (double) duracao/2){
        visualizacoes++;
    }
}