#include "Postagem.h"
#include "Perfil.h"
#include "Video.h"
#include "Lista.h"
#include "Imagem.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void teste(){
    Video *june = new Video("June Gloom", 3);
    
    try{
        Video *ciencia = new Video("Science", -1);
    } catch(invalid_argument *e){
        cout << e->what() << endl;
        delete e;
    }

    Lista *lista = new Lista("Cape God", 4);

    try{
        cout << lista->getDuracao() << endl;
    } catch(logic_error *e){
        cout << e->what() << endl;
        delete e;
    }
    
    lista->adicionar(june);
    lista->imprimir();

    delete lista;
    delete june;

}

/* int main(){
    teste();
    return 0;
} */