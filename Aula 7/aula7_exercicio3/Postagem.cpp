#include <iostream>
#include "Postagem.h"

Postagem::Postagem(string legenda) : legenda(legenda){}

Postagem::~Postagem(){
    cout << "Destrutor de postagem com " << visualizacoes << " visualizacoes: " << legenda << endl;
}

void Postagem::assistir(){
    visualizacoes++;
}

void Postagem::imprimir(){
    cout << "Postagem: " << legenda << " - " << visualizacoes << " visualizacoes" << endl;
}

string Postagem::getLegenda(){
    return legenda;
}

int Postagem::getVisualizacoes(){
    return visualizacoes;
}