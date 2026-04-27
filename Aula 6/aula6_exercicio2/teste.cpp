#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Postagem *postAntivirus = new Postagem("instalacao antivirus");
    Video *videoAntivirus = new Video("como instalar um antivirus", 120);
    Video *videoTutVirus = new Video("tutorial remover virus", 300);

    videoTutVirus->assistir(170);
    videoTutVirus->assistir(170);
    videoTutVirus->assistir(170);

    Lista *listaMaisVistos = new Lista("videos mais vistos", 15);
    listaMaisVistos->adicionar(videoAntivirus);
    listaMaisVistos->adicionar(videoTutVirus);
    
    Perfil *perfilEpicos = new Perfil("tutoriais epicos", 10);
    perfilEpicos->postar(listaMaisVistos);

    listaMaisVistos->imprimir();
    perfilEpicos->imprimir();

    delete perfilEpicos;
    delete postAntivirus;
    delete videoAntivirus;
    delete videoTutVirus;

}

/*   int main(){
    teste();
    return 0;
} */