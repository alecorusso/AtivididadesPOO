#include "PersistenciaDePostagem.h"
#include "Video.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

using namespace std;

PersistenciaDePostagem::PersistenciaDePostagem(string arquivo) : arquivo(arquivo){}

PersistenciaDePostagem::~PersistenciaDePostagem(){}

void PersistenciaDePostagem::inserir(Postagem *p){
    Video *v = dynamic_cast<Video*>(p);

    if(v == NULL){
        return;
    }

    ofstream output;
    output.open(arquivo, ios_base::app);

    output << v->getLegenda() << " " << v->getDuracao() << " " << v->getVisualizacoes() << endl;

    output.close();
}

Postagem** PersistenciaDePostagem::obter(int& quantidade){
    string legenda;
    int duracao;
    int visualizacoes;

    Postagem **p = new Postagem*[10];
    int indice = 0;
    quantidade = 0;

    ifstream leitura;
    leitura.open(arquivo);

    if(leitura.fail()){
        throw new invalid_argument("Erro de leitura");
    }

    leitura >> legenda;
    while(leitura){
        leitura >> duracao >> visualizacoes;
        Video *v = new Video(legenda, duracao, visualizacoes);
        p[indice] = v;
        indice++;
        quantidade++;
        leitura >> legenda;
    }

    if(quantidade == 0){
        p = NULL;
    }

    if(!leitura.eof()){
        throw new logic_error("Erro de formatação");
    }

    return p;
}