#include "Perfil.h"
#include <iostream>
#include <stdexcept>
#include "JaAdicionado.h"
#include <algorithm>

using namespace std;

Perfil::~Perfil(){
    cout << "Destruidor de perfil: " << nome << " - " << getPostagens()->size() << " postagens" << endl;
    for(unsigned int i = 0; i < getPostagens()->size(); i++){
        delete getPostagens()->at(i);
    }
    delete postagens;
    cout << "Perfil destruído" << endl;
}

Perfil::Perfil(string nome, vector<Postagem*>* postagens) : nome (nome){
    this->postagens = new vector<Postagem*>();
    for(unsigned int i = 0; i < postagens->size(); i++){
        this->postagens->push_back(postagens->at(i));
    }
}

Perfil::Perfil(string nome) : nome (nome){
    this->postagens = new vector<Postagem*>();
}

int Perfil::getTotalDeVisualizacoes(){
    int total = 0;

    for(int i = 0; i < getPostagens()->size(); i++){
        try{
            total += getPostagens()->at(i)->getVisualizacoes();
        } catch(logic_error *e){}
    }

    return total;
}

void Perfil::postar(Postagem *p){

    auto it = find(getPostagens()->begin(), getPostagens()->end(), p);

    if(it != getPostagens()->end()){
        throw new JaAdicionado();
    }

    postagens->push_back(p);

    return;
}

void Perfil::imprimir(){
    cout << "Perfil: " << nome << " - " << getPostagens()->size() << " postagens - " << getTotalDeVisualizacoes() << " visualizacoes totais" << endl;
    for(unsigned int i = 0; i < getPostagens()->size(); i++){
        getPostagens()->at(i)->imprimir();
    }
}

string Perfil::getNome(){
    return nome;
}

vector<Postagem*>* Perfil::getPostagens(){
    return postagens;
}