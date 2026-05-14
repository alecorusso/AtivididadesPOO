#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include <iostream>

void teste(){
    Video *video = new Video("More like you", 338);
    video->assistir(170);
    video->assistir(68);

    video->imprimir();

    Video::setPorcentagem(0.2);

    video->assistir(170);
    video->assistir(68);

    video->imprimir();

    delete video;

}

int main(){
    teste();
    return 0;
}