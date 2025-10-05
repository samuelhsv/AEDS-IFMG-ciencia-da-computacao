#include <stdio.h>
#include <stdlib.h>

void quadrado(float vetor[], int tamanho){
    for (int i=0;i<tamanho;i++){
        vetor[i] = vetor[i]*vetor[i];
    }
}