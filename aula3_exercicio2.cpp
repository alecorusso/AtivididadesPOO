#include <iostream>
#include <string>

using namespace std;

class Postagem {
    public:
        string legenda;
        int visualizacoes = 0;

        void assistir ();
        void imprimir ();
}

class Perfil {
    public:
        string nome;
        Postagem* p1 = NULL;
        Postagem* p2 = NULL;
        int quantidade = 0;

        int getTotalDeVisualizacoes();
        bool postar(Postagem* p);
}

void Postagem::assistir(){
    visualizacoes++;
}

void Postagem::imprimir(){
    cout << "Postagem: " << legenda << " - " << visualizacoes << "visualizacoes" << endl;
}

int Perfil::getTotalDeVisualizacoes(){
    int p1Visus = 0, p2Visus = 0;

    if(p1 != NULL){
        p1Visus = *p1->visualizacoes;
    } 
    if (p2 != NULL){
        p2Visus = *p2->visualizacoes;
    }

    return p1Visus + p2Visus;
}

bool Perfil::postar(Postagem* p){
    if(quantidade == 0 && *p != p1){
        p1 = *p;
        quantidade++;
        return true;
    } else if(quantidade == 1 && *p != p2){
        p2 = *p;
        quantidade++;
        return true;
    }

    return false;
}

void teste(){
    Postagem *postRaul = new Postagem;  
    postRaul->legenda = "tocando Raul Seixas";

    postRaul->assistir();
    postRaul->assistir();
    postRaul->assistir();

    postRaul->imprimir();
    postRaul->assistir();

    Postagem *postFaroeste = new Postagem;
    postFaroeste->legenda = "Faroeste Caboclo";
    postFaroeste->assistir();
    postFaroeste->assistir();

    Perfil *cifraClub = new Perfil;
    cifraClub->nome = "cifra club";
    cifraClub->postar(postRaul);
    cifraClub->postar(postFaroeste);
    postFaroeste->imprimir();
    cifraClub->getTotalDeVisualizacoes();

}
