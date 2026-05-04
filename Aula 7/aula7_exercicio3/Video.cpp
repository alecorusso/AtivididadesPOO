#include "Video.h"
#include "Conteudo.h"
#include <string>
#include <iostream>

using namespace std;

Video::Video(string legenda, int duracao) : Conteudo(legenda), duracao (duracao){}

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
}