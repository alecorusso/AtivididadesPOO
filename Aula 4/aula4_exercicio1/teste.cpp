#include "Postagem.h"
#include "Perfil.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Postagem *postRaul = new Postagem;  
    postRaul->legenda = "tocando Raul Seixas";

    postRaul->assistir();
    postRaul->assistir();
    postRaul->assistir();
    postRaul->assistir();

    Postagem *postFaroeste = new Postagem;
    postFaroeste->legenda = "Faroeste Caboclo";
    
    postFaroeste->assistir();
    postFaroeste->assistir();

    Perfil *cifraClub = new Perfil;
    cifraClub->nome = "cifra club";
    
    cifraClub->postar(postRaul);
    cifraClub->postar(postFaroeste);
    
    cifraClub->imprimir();

}

int main(){
    teste();
    return 0;
}