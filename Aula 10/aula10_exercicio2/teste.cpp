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

    PersistenciaDePostagem *leitura = new PersistenciaDePostagem("teste.txt");

    int quantidade = 0;

    try{
        Postagem **p = leitura->obter(quantidade);
        Perfil *perfil = new Perfil("Conan Gray", p, quantidade);
        perfil->imprimir();
        delete perfil;
    } catch(exception *e){
        cout << e->what() << endl;
        delete e;
    }

}

/* 
int main(){
    teste();
    return 0;
} */