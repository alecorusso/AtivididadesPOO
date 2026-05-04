#include "Lista.h"
#include "Postagem.h"
#include "Video.h"
#include <iostream>
#include <string>

using namespace std;

Lista::Lista(string legenda, int tamanho) : Postagem(legenda), tamanho (tamanho){
    this->conteudos = new Conteudo*[tamanho];
}

Lista::~Lista(){
    cout << "Lista com " << quantidade << " conteudos destruida" << endl;
    delete[] conteudos;
}

int Lista::getQuantidade(){
    return quantidade;
}

Conteudo** Lista::getConteudos(){
    return conteudos;
}

bool Lista::adicionar(Conteudo* c){
    if(quantidade < tamanho){
        for(int i = 0; i < quantidade; i++){
            if(c == conteudos[i]){
                return false;
            }
            Video *v = dynamic_cast<Video*>(c);
            if(v != NULL && v->getDuracao() == 0){
                return false;
            }
        }

        conteudos[quantidade] = c;
        quantidade++;
        return true;
    }

    return false;
}

bool Lista::adicionar(Lista* l){
    Conteudo **copia = new Conteudo*[tamanho];

    for(int i = 0; i < tamanho; i++){
        int j = 0;
        for(j; j<l->getQuantidade() && l->getConteudos()[j] == getConteudos()[i]; j++){}
        if(j<l->getQuantidade()){
            copia[i]=(getConteudos()[j]);
        }
    }

    if(tamanho-quantidade >= sizeof(copia)){
        for(int i = 0; i < sizeof(copia); i++){
            adicionar(getConteudos()[i]);
        }
        return true;
    }

    delete[] copia;

    return false;

}

void Lista::imprimir() {
    cout << "Lista com " << quantidade << " conteudos: " << legenda << endl;
    for (int i = 0; i < quantidade; i++){
        cout << "\t" << i+1 << ". ";
        conteudos[i]->imprimir();
    }
}

int Lista::getDuracao(){
    int duracao_final = 0;
    Video *v = new Video("", 0);

    for(int i = 0; i < getQuantidade(); i++){
        v = dynamic_cast<Video*>(getConteudos()[i]);
        if(v != NULL){
            duracao_final += v->getDuracao();
        }
    }

    delete v;

    return duracao_final;

}