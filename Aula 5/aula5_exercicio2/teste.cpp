#include "Postagem.h"
#include "Perfil.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Perfil *avesFavoritas = new Perfil("Minhas aves favoritas", 5);

    Postagem *postPombos = new Postagem("Pombos");
    Postagem *postPapagaios = new Postagem("Papagaios");
    Postagem *postPavoes = new Postagem("Pavoes");

    postPombos->assistir();
    postPombos->assistir();

    postPapagaios->assistir();
    postPapagaios->assistir();
    postPapagaios->assistir();

    postPavoes->assistir();
    postPavoes->assistir();
    postPavoes->assistir();
    postPavoes->assistir();

    avesFavoritas->postar(postPombos);
    avesFavoritas->postar(postPapagaios);
    avesFavoritas->postar(postPavoes);

    avesFavoritas->imprimir();

    delete avesFavoritas;

}

/*  int main(){
    teste();
    return 0;
} */