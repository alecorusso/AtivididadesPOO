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

    Video *heather = new Video("Heather", 25);
    
    for(int i = 0; i < 7; i++){
        heather->assistir(25);
    }

    Video *memories = new Video("Memories", 29);

    for(int i = 0; i < 3; i++){
        memories->assistir(29);
    }

    Video *look = new Video("Lookalike", 5);

    for(int i = 0; i < 10; i++){
        look->assistir(5);
    }

    Video *tele = new Video ("Telepath", 42);

    for(int i = 0; i < 5; i++){
        tele->assistir(42);
    }

    PersistenciaDePostagem *save = new PersistenciaDePostagem("teste.txt");

    save->inserir(heather);
    save->inserir(memories);
    save->inserir(look);
    save->inserir(tele);

    delete heather;
    delete memories;
    delete look;
    delete tele;
    delete save;

}

/* int main(){
    teste();
    return 0;
} */