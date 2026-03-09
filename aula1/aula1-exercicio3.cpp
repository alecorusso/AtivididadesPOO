
#include <iostream>
#include <string>

using namespace std;

bool nomesIguais(string nomes[], int quantidade){

    for (int i = 0; i < quantidade-1; i++){
        for(int j = i+1; j < quantidade; j++){
            if(nomes[i] == nomes[j]){
                return 1;
            }
        }
    }

    return 0;
}