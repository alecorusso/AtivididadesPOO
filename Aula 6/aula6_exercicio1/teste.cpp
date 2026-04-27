#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
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

    Perfil *perfilEpicos = new Perfil("tutoriais epicos", 10);
    perfilEpicos->postar(postAntivirus);
    perfilEpicos->postar(videoAntivirus);
    perfilEpicos->postar(videoTutVirus);
   
    perfilEpicos->imprimir();
    cout << videoTutVirus->getDuracao() << endl;

    delete perfilEpicos;

}

/*  int main(){
    teste();
    return 0;
} */