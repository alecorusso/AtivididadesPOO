#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include <iostream>

void teste(){
    Lista *lista = new Lista("Melhores Atores", 5);

    Imagem *tom = new Imagem("Tom Cruise");
    Imagem *brad = new Imagem("Brad Pitt");

    tom->assistir();
    tom->assistir();
    tom->assistir();

    brad->assistir();
    brad->assistir();

    Video *jim = new Video("Entrevista Jim Carrey", 5);

    lista->adicionar(tom);
    lista->adicionar(brad);
    lista->adicionar(jim);

    Video *will = new Video("Momentos Will Smith", 3);
    will->assistir(3);

    Perfil *perfil = new Perfil("Atores de sucesso", 10);
    perfil->postar(lista);
    perfil->postar(will);
    
    perfil->imprimir();

    delete perfil;

}

int main(){
    teste();
    return 0;
}