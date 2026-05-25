#include <iostream>
#include "Postagem.h"

Postagem::Postagem(string legenda) : legenda(legenda){}

Postagem::~Postagem(){
    cout << "Destrutor de postagem: " << legenda << endl;
}

string Postagem::getLegenda(){
    return legenda;
}