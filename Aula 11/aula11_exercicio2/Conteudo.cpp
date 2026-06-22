#include "Conteudo.h"

Conteudo::Conteudo(string legenda) : Postagem(legenda){}

Conteudo::~Conteudo(){};

int Conteudo::getVisualizacoes(){
    return visualizacoes;
}

void Conteudo::assistir(){
    visualizacoes++;
}