#include "Imagem.h"
#include <iostream>

Imagem::Imagem(string legenda) : Conteudo(legenda){}

Imagem::~Imagem(){}

void Imagem::imprimir(){
    cout << "Imagem: " << getLegenda() << " - " << getVisualizacoes() << " visualizacoes" << endl;
}