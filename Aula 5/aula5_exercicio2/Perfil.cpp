#include "Perfil.h"
#include "Postagem.h"
#include <iostream>
#include <string>

using namespace std;

Perfil::Perfil(string nome, int maximoDePostagens) : nome (nome), maximoDePostagens (maximoDePostagens){
    this->posts = new Postagem*[maximoDePostagens];
}

Perfil::~Perfil(){
    cout << "Destrutor de perfil: " << nome << " - " << quantidade << " postagens" << endl;
    for(int i = 0; i < quantidade; i++){
        delete posts[i];
    }
    delete[] posts;
    cout << "Perfil destruido" << endl;
}

int Perfil::getTotalDeVisualizacoes(){
    int total = 0;

    for(int i = 0; i < quantidade; i++){
        total += posts[i]->getVisualizacoes();
    }

    return total;
}

void Perfil::imprimir(){
    cout << "Perfil: " << nome << " - " << quantidade << " postagens - " << getTotalDeVisualizacoes() << 
    " visualizacoes totais" << endl;
    
    for(int i = 0; i < quantidade; i++){
        posts[i]->imprimir();
    }
}

bool Perfil::postar(Postagem* p){
    if(quantidade < maximoDePostagens){
        for(int i = 0; i < quantidade; i++){
            if(p == posts[i]){
                return false;
            }
        }

        posts[quantidade] = p;
        quantidade++;
        return true;
    }

    return false;
}

string Perfil::getNome(){
    return nome;
}

int Perfil::getQuantidade(){
    return quantidade;
}

Postagem** Perfil::getPostagens(){
    return posts;
}