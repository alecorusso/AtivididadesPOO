#include "Lista.h"
#include "Video.h"
#include <iostream>

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

bool Lista::adicionar(Conteudo* c){
    if(quantidade < tamanho){
        for(int i = 0; i < quantidade; i++){
            if(conteudos[i] == c){
                return false;
            }
        }
        Video *v = dynamic_cast<Video*>(c);
        if(v != NULL && v->getDuracao() == 0){
            return false;
        }
        conteudos[quantidade] = c;
        quantidade++;
        return true;
    }
    return false;
}

bool Lista::adicionar(Lista* l){
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
        return false;
    }

    for(int i = 0; i < l->getQuantidade(); i++){
        if(vetorBits[i]){
            getConteudos()[quantidade] = l->getConteudos()[i];
            quantidade++;
        }
    }

    delete[] vetorBits;

    return true;
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
    for(int i = 0; i < quantidade; i++){
        Video *v = dynamic_cast<Video*>(getConteudos()[i]);
        if(v != NULL){
            duracaoTotal += v->getDuracao();
        }
    }
    return duracaoTotal;
}