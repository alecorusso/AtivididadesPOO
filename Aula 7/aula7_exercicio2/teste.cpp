#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Conteudo.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Video *v1 = new Video("v1", 5);
    Video *v2 = new Video("v2", 5);
    Video *v3 = new Video("v3", 5);
    Video *v4 = new Video("v4", 5);
    Video *v5 = new Video("v5", 5);

    Lista *l1 = new Lista("l1", 5);
    Lista *l2 = new Lista("l2", 5);

    l1->adicionar(v1);
    l1->adicionar(v3);
    l1->adicionar(v5);

    l2->adicionar(v2);
    l2->adicionar(v4);

    l1->adicionar(l2);

    Perfil *jorge = new Perfil("Jorge", 2);
    jorge->postar(l1);

    Perfil *roberto = new Perfil("Roberto", jorge->getPostagens(), 1);

    roberto->imprimir();
}

    int main(){

    Video *v1 = new Video("v1", 5);
    Video *v2 = new Video("v2", 5);
    Video *v3 = new Video("v3", 5);
    Video *v4 = new Video("v4", 5);
    Video *v5 = new Video("v5", 5);

    Lista *l1 = new Lista("l1", 5);
    Lista *l2 = new Lista("l2", 5);

    l1->adicionar(v1);
    l1->adicionar(v3);
    l1->adicionar(v5);

    l2->adicionar(v2);
    l2->adicionar(v4);

    cout << l1->adicionar(l2) << endl;

    l1->imprimir();
    return 0;
}