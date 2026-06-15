#include "PersistenciaDePostagem.h"
#include "Video.h"
#include <fstream>
#include <iostream>

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