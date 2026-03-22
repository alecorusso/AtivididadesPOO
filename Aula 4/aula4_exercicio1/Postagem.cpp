#include "Postagem.h"
#include <iostream>

using namespace std;

void Postagem::assistir(){
    visualizacoes++;
}

void Postagem::imprimir(){
    cout << "Postagem: " << legenda << " - " << visualizacoes << " visualizacoes" << endl;
}