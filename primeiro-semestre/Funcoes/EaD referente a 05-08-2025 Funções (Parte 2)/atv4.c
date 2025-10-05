#include <stdio.h>
#include <stdlib.h>

int apareceu(char vetor[], char letra){
    int apareceu = 0;
    for (int i=0; vetor[i];i++) {
        if (vetor[i] == letra) apareceu++;
    }
    return apareceu;
}