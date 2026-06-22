#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include "JaAdicionado.h"
#include <iostream>
#include <stdexcept>
#include "PersistenciaDePostagem.h"

using namespace std;

void teste(){

    Perfil* dodie = new Perfil("dodie");

    Video* monster = new Video("Monster", 118);
    for(int i = 0; i < 8; i++){
        monster->assistir(118);
    }

    dodie->postar(monster);

    Video* human = new Video("Human", 23);
    for(int i = 0; i < 6; i++){
        human->assistir(23);
    }

    dodie->postar(human);

    Video* boys = new Video("Boys like you", 4);
    for(int i = 0; i < 5; i++){
        boys->assistir(4);
    }

    dodie->postar(boys);

    Lista* lista = new Lista("Build a problem", 10);

    dodie->postar(lista);

    dodie->imprimir();

    delete dodie;

}


/* int main(){
    teste();
    return 0;
} */