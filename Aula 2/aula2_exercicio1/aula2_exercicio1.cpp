#include <iostream>
#include <string>

using namespace std;

string* encontrarMusica(int duracoes[], string estilos[], string nomes[], int quantidade, string estilo, int duracao){
    
    for(int i = 0; i < quantidade; i++){
        if (duracoes[i] == duracao && estilos[i] == estilo){
            return &nomes[i];
        }
    }

    return NULL;
}

