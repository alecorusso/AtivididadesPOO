#include <iostream>
#include <string>

using namespace std;

int calcularEstatisticas(int duracoes[], int quantidade, int& minimo, int *maximo){

    int duracao_playlist = 0, min_atual = 0, max_atual = 0;

    if (quantidade != 0){

        min_atual = duracoes[0];
        max_atual = duracoes[0];

        for (int i = 0; i < quantidade; i++){

            duracao_playlist += duracoes[i];
            
            if (duracoes[i] < min_atual){

                min_atual = duracoes[i];

            } else if (duracoes[i] > max_atual){

                max_atual = duracoes[i];

            }
        }

    }

    minimo = min_atual;
    *maximo = max_atual;

    return duracao_playlist;

}