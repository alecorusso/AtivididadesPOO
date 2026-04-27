#include "Lista.h"
#include "Postagem.h"
#include <iostream>
#include <string>

using namespace std;

Lista::Lista(string legenda, int tamanho) : Postagem(legenda), tamanho (tamanho){
    this->videos = new Video*[tamanho];
}

Lista::~Lista(){
    cout << "Lista com " << quantidade << " videos destruida" << endl;
    delete[] videos;
}

int Lista::getQuantidade(){
    return quantidade;
}

Video** Lista::getVideos(){
    return videos;
}

bool Lista::adicionar(Video* v){
    if(quantidade < tamanho){
        for(int i = 0; i < quantidade; i++){
            if(v == videos[i]){
                return false;
            }
        }

        videos[quantidade] = v;
        quantidade++;
        return true;
    }

    return false;
}

void Lista::imprimir() {
    cout << "Lista com " << quantidade << " videos: " << legenda << endl;
    for (int i = 0; i < quantidade; i++){
        cout << "\t" << i+1 << ". ";
        videos[i]->imprimir();
    }
}