#include "Postagem.h"
#include <iostream>
#include <string>

using namespace std;

void Postagem::assistir(){
    visualizacoes++;
}

void Postagem::imprimir(){
    cout << "Postagem: " << legenda << " - " << visualizacoes << " visualizacoes" << endl;
}

string Postagem::getLegenda(){
    return legenda;
}

void Postagem::setLegenda(string legenda){
    this->legenda = legenda;
}

int Postagem::getVisualizacoes(){
    return visualizacoes;
}

