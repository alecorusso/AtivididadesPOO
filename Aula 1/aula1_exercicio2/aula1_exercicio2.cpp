#include <iostream>
#include <string>

using namespace std;

int calculaPontuacao(int posicao, bool participou){
    int pontos[5] = {7, 5, 4, 3, 1};
    int pontuacao = 0;
    if(participou && (posicao <= 5)){
        pontuacao = pontos[posicao-1];
    }

    return pontuacao;
}

int calculaPontuacaoFinal(int posicoes[], bool participou[], int quantidade){
    int pontuacaoFinal = 0;

    for (int i = 0; i < quantidade; i++) {
        pontuacaoFinal += calculaPontuacao(posicoes[i], participou[i]);
    }

    return pontuacaoFinal;
}