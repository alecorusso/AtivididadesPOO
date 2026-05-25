#include "Perfil.h"
#include <iostream>

Perfil::~Perfil(){
    cout << "Destruidor de perfil: " << nome << " - " << quantidade << " postagens" << endl;
    for(int i = 0; i < quantidade; i++){
        delete postagens[i];
    }
    delete[] postagens;
    cout << "Perfil destruído" << endl;
}

Perfil::Perfil(string nome, Postagem** postagens, int quantidade) : nome (nome), quantidade (quantidade), maximoDePostagens (quantidade){
    this->postagens = new Postagem*[maximoDePostagens];
    for(int i = 0; i < quantidade; i++){
        this->postagens[i] = postagens[i];
    }
}

Perfil::Perfil(string nome, int maximoDePostagens) : nome (nome), maximoDePostagens (maximoDePostagens){
    postagens = new Postagem*[maximoDePostagens];
}

int Perfil::getTotalDeVisualizacoes(){
    int total = 0;

    for(int i = 0; i < quantidade; i++){
        total += postagens[i]->getVisualizacoes();
    }

    return total;
}

bool Perfil::postar(Postagem *p){
    if(quantidade < maximoDePostagens){
        for(int i = 0; i < quantidade; i++){
            if(postagens[i] == p){
                return false;
            }
        }
        postagens[quantidade] = p;
        quantidade++;
        return true;
    }
    return false;
}

void Perfil::imprimir(){
    cout << "Perfil: " << nome << " - " << quantidade << " postagens - " << getTotalDeVisualizacoes() << " visualizacoes totais" << endl;
    for(int i = 0; i < quantidade; i++){
        postagens[i]->imprimir();
    }
}

string Perfil::getNome(){
    return nome;
}

int Perfil::getQuantidade(){
    return quantidade;
}

Postagem** Perfil::getPostagens(){
    return postagens;
}