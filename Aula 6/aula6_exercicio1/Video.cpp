#include "Video.h"
#include "Postagem.h"
#include <string>
#include <iostream>

using namespace std;

Video::Video(string legenda, int duracao) : Postagem(legenda), duracao (duracao){}

Video::~Video(){
    cout << "Destrutor de video com " << visualizacoes << " visualizacoes: "
         << legenda << endl;
}

int Video::getDuracao(){
    return duracao;
}

void Video::assistir(int tempo){
    if (tempo >= (double) duracao/2){
        visualizacoes++;
    }
    return;
}