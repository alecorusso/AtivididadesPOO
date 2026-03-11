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

void Postagem::assistir(){
    visualizacoes++;
}

void Postagem::imprimir(){
    cout << "Postagem: " << legenda << " - " << visualizacoes << "visualizacoes" << endl;
}

void teste(){
    Postagem *postRaul = new Postagem;  
    postRaul->legenda = "tocando Raul Seixas";

    for(int i = 0; i < 3; i++){
        postRaul->assistir();
    }

    postRaul->imprimir();
}
