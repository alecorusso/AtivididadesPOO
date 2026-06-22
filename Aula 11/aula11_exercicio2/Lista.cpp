#include "Lista.h"
#include "Video.h"
#include "JaAdicionado.h"
#include <stdexcept>
#include <iostream>
#include <algorithm>

using namespace std;

Lista::Lista(string legenda) : Postagem(legenda){
    conteudos = new list<Conteudo*>;
}

Lista::~Lista(){
    cout << "Lista com " << getConteudos()->size() << " conteudos destruida" << endl;
    delete conteudos;
}

list<Conteudo*>* Lista::getConteudos(){
    return conteudos;
}

void Lista::adicionar(Conteudo* c){

    auto it = find(getConteudos()->begin(), getConteudos()->end(), c);

    if(it != getConteudos()->end()){
        throw new JaAdicionado();
    }

    getConteudos()->push_back(c);
}

void Lista::adicionar(Lista* l){

    if(l == this){
        throw new JaAdicionado();
    }
        
    for(list<Conteudo*>::iterator it = l->getConteudos()->begin(); it != l->getConteudos()->end(); it++){
        auto achou = find(getConteudos()->begin(), getConteudos()->end(), *it);
        if(achou == getConteudos()->end()){
            getConteudos()->push_back(*it);
        }
    }
}

void Lista::imprimir(){
    cout << "Lista com " << getConteudos()->size() << " conteudos: " << getLegenda() << endl;
    int i = 0;
    for(list<Conteudo*>::iterator it = getConteudos()->begin(); it != getConteudos()->end(); it++){
        cout << "\t" << i+1 << ". ";
        (*it)->imprimir();
        i++;
    }
}

int Lista::getDuracao(){
    int duracaoTotal = 0;
    bool temVideo = 0;

    for(list<Conteudo*>::iterator it = getConteudos()->begin(); it != getConteudos()->end(); it++){
        Video *v = dynamic_cast<Video*>(*it);
        if(v != NULL){
            duracaoTotal += v->getDuracao();
            temVideo = 1;
        }
    }

    if(!temVideo){
        throw new logic_error("lista sem videos");
    }

    return duracaoTotal;
}

int Lista::getVisualizacoes(){
    int visusTotal = 0;

    if(getConteudos()->size() == 0){
        throw new logic_error("Lista Vazia");
    }

    for(list<Conteudo*>::iterator it = getConteudos()->begin(); it != getConteudos()->end(); it++){
        visusTotal += (*it)->getVisualizacoes();
    }
    return visusTotal;
}