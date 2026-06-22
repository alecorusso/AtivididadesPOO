#include "Video.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Video::Video(string legenda, int duracao) : Conteudo(legenda), duracao (duracao){
    if(duracao <= 0){
        throw new invalid_argument("duracao invalida");
    }
}

Video::Video(string legenda, int duracao, int visualizacoes) : Conteudo(legenda), duracao (duracao){
    this->visualizacoes = visualizacoes;

    if(duracao <= 0){
        throw new invalid_argument("duracao invalida");
    }
}

Video::~Video(){
    cout << "Destruidor de vídeo com " << visualizacoes << " visualizacoes: " << getLegenda() << endl;
}

int Video::getDuracao(){
    return duracao;
}

void Video::assistir(int tempo){
    if(tempo >= (double) duracao*Video::porcentagem){
        visualizacoes++;
    }
}

void Video::imprimir(){
    cout << "Video: " << getLegenda() << " - " << getVisualizacoes() << " visualizacoes" << endl;
}

double Video::porcentagem = 0.5;

double Video::getPorcentagem(){
    return porcentagem;
}

void Video::setPorcentagem(double valor){
    Video::porcentagem = valor;
}