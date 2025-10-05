#include <stdio.h>

int substring(char string[], char substring[]){
   for (int i = 0; string[i]; i++) {
        int j = 0;
        while (substring[j] && string[i + j] == substring[j]) {
            j++; // vai passar pra proxima posicao enquanto os caracteres forem iguais
        }
        if (substring[j] == '\0') { // se a substring chegar no fim (uma das condicoes de parada)...
            return i; // retorna a posição da string de fora, pois achou
        }
    }
    return -1; // não encontrou
}