#include "Postagem.h"
#include "Perfil.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Postagem *postRaul = new Postagem;  
    postRaul->setLegenda("tocando Raul Seixas");

    postRaul->assistir();
    postRaul->assistir();
    postRaul->assistir();
    postRaul->assistir();

    Postagem *postFaroeste = new Postagem;
    postFaroeste->setLegenda("Faroeste Caboclo");
    
    postFaroeste->assistir();
    postFaroeste->assistir();

    Perfil *cifraClub = new Perfil;
    cifraClub->setNome("cifra club");
    
    cifraClub->postar(postRaul);
    cifraClub->postar(postFaroeste);
    
    postRaul->assistir();
    postRaul->assistir();
    postFaroeste->assistir();
    postFaroeste->assistir();

    Postagem *postCegos = new Postagem;
    postCegos->setLegenda("Cegos do Castelo");

    postCegos->assistir();
    postCegos->assistir();
    cifraClub->postar(postCegos);

    cifraClub->imprimir();

}

int main(){
    teste();
    return 0;
}