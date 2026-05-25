#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include "JaAdicionado.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void teste(){
    Perfil *perfil = new Perfil("Albuns favoritos", 3);
    Lista *lista = new Lista("After Hours", 2);

    Video *alone = new Video("Alone again", 18);
    Video *late = new Video("Too late", 19);
    Video *eyes = new Video("In your eyes", 58);

    
    try{
        perfil->postar(alone);
        perfil->postar(alone);
    } catch(JaAdicionado *e){
        cout << e->what() << endl;
        delete e;
    }

    try{
        lista->adicionar(alone);
        lista->adicionar(late);
        lista->adicionar(eyes);
    } catch(overflow_error *e){
        cout << e->what() << endl;
        delete e;
    }

    try{
        lista->adicionar(lista);
    } catch (JaAdicionado *e){
        cout << e->what() << endl;
        delete e;
    }

}

/* int main(){
    teste();
    return 0;
} */