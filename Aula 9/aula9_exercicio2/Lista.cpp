#include "Lista.h"
#include "Video.h"
#include "JaAdicionado.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Lista::Lista(string legenda, int tamanho) : Postagem(legenda), tamanho (tamanho){
    conteudos = new Conteudo*[tamanho];
}

Lista::~Lista(){
    cout << "Lista com " << quantidade << " conteudos destruida" << endl;
    delete[] conteudos;
}

Conteudo** Lista::getConteudos(){
    return conteudos;
}

int Lista::getQuantidade(){
    return quantidade;
}

void Lista::adicionar(Conteudo* c){
    if(quantidade < tamanho){
        for(int i = 0; i < quantidade; i++){
            if(conteudos[i] == c){
                throw new JaAdicionado();
            }
        }
        conteudos[quantidade] = c;
        quantidade++;
        return;
    }
    throw new overflow_error("maximo de conteudo");
}

void Lista::adicionar(Lista* l){

    if(l == this){
        throw new JaAdicionado();
    }

    int conteudosDistintos = 0;
    int* vetorBits = new int[l->getQuantidade()](); 

    for(int i = 0; i < l->getQuantidade(); i++){
        int flag = 1;
        for(int j = 0; j < getQuantidade(); j++){
            if(l->getConteudos()[i] == getConteudos()[j]){
                flag = 0;
            }
        }
        if(flag){
            conteudosDistintos++;
            vetorBits[i] = 1;
        }
    }  

    if(conteudosDistintos > (tamanho-quantidade)){
        throw new overflow_error("maximo de conteudo");
    }

    for(int i = 0; i < l->getQuantidade(); i++){
        if(vetorBits[i]){
            this->adicionar(l->getConteudos()[i]);
            quantidade++;
        }
    }

    delete[] vetorBits;

    return;
}

void Lista::imprimir(){
    cout << "Lista com " << quantidade << " conteudos: " << legenda << endl;
    for(int i = 0; i < quantidade; i++){
        cout << "\t" << i+1 << ". ";
        conteudos[i]->imprimir();
    }
}

int Lista::getDuracao(){
    int duracaoTotal = 0;
    bool temVideo = 0;

    for(int i = 0; i < quantidade; i++){
        Video *v = dynamic_cast<Video*>(getConteudos()[i]);
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

    if(quantidade == 0){
        throw new logic_error("Lista Vazia");
    }

    for(int i = 0; i < quantidade; i++){
        visusTotal += getConteudos()[i]->getVisualizacoes();
    }
    return visusTotal;
}