#include "Perfil.h"
#include "Postagem.h"
#include <iostream>

using namespace std;

int Perfil::getTotalDeVisualizacoes(){
    int p1Visus = 0, p2Visus = 0;

    if(p1 != NULL){
        p1Visus = p1->visualizacoes;
    } 
    if (p2 != NULL){
        p2Visus = p2->visualizacoes;
    }

    return p1Visus + p2Visus;
}

void Perfil::imprimir(){
    cout << "Perfil: " << nome << " - " << quantidade << " postagens - " << getTotalDeVisualizacoes() <<
    " visualizações totais" << endl;
    
    if(quantidade == 1){
        p1->imprimir();
    } 
    if(quantidade == 2){
        p1->imprimir();
        p2->imprimir();
    }
}

bool Perfil::postar(Postagem* p){
    if(quantidade == 0){
        p1 = p;
        quantidade++;
        return true;
    } else if(quantidade == 1 && p != p1){
        p2 = p;
        quantidade++;
        return true;
    }

    return false;
}