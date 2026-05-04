#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Conteudo.h"
#include "Imagem.h"
#include <iostream>
#include <string>

using namespace std;

void teste(){
    Imagem *i1 = new Imagem("i1");
    Imagem *i2 = new Imagem("i2");

    Video *v1 = new Video("v1", 5);
    Video *v2 = new Video("v2", 5);

    Lista *l1 = new Lista("l1", 4);

    l1->adicionar(i1);
    l1->adicionar(i2);
    l1->adicionar(v1);
    l1->adicionar(v2);

    cout << "Lista com duracao de " << l1->getDuracao() << " segundos" << endl;

    delete i1;
    delete i2;
    delete v1;
    delete v2;
    delete l1;
}

/*   int main(){
    teste();
    return 0;
} */