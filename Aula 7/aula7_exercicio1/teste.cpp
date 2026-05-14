#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Conteudo.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Conteudo *c1 = new Conteudo("c1");
    c1->assistir();

    Conteudo *c2 = new Conteudo("c2");
    c2->assistir();
    c2->assistir();

    Conteudo *c3 = new Conteudo("c3");
    c3->assistir();
    c3->assistir();
    c3->assistir();

    Video *v1 = new Video("v1", 5);
    v1->assistir(4);
    v1->assistir(4);
    v1->assistir(4);
    v1->assistir(4);

    Lista *l1 = new Lista("l1", 5);

    l1->adicionar(c1);
    l1->adicionar(c2);
    l1->adicionar(c3);
    l1->adicionar(v1);

    l1->imprimir();

    delete c1;
    delete c2;
    delete c3;
    delete v1;
    delete l1;

}

   /* int main(){
    return 0;
} */