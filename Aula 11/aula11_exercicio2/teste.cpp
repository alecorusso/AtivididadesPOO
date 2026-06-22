#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include "JaAdicionado.h"
#include <iostream>
#include <stdexcept>
#include "PersistenciaDePostagem.h"

using namespace std;

void teste(){

    Lista* freckle = new Lista("Freckle season");
    Lista* singles = new Lista("Singles");
    
    Video* pretending = new Video("Pretending", 208, 0);
    Video* heavy = new Video("Heavy", 3, 14);
    Video* figure = new Video("Figure it out", 54, 3);
    Video* flatline = new Video("Flatline", 85, 7);

    singles->adicionar(pretending);
    singles->adicionar(flatline);

    freckle->adicionar(heavy);
    freckle->adicionar(figure);

    singles->adicionar(freckle);
    freckle->adicionar(singles);

    freckle->imprimir();
    singles->imprimir();

    delete freckle;
    delete singles;
    delete pretending;
    delete heavy;
    delete figure;
    delete flatline;

}


/* int main(){
    teste();
    return 0;
} */