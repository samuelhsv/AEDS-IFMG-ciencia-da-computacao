#include <stdio.h>
#include <stdlib.h>

void ordem(int *a, int *b, int *c){ // ex: c - b - a (ordem decrescente)
    int temp;
    // Se *a for menor que *b, troca os valores
    if (*a < *b) {temp = *a; *a = *b; *b = temp;} // -> c - a - b (os valores de a e b se trocaram)
    
    // Se *a for menor que *c, troca os valores
    if (*a < *c) {temp = *a; *a = *c; *c = temp;} // -> a - c - b (a agora é o maior valor)
    // Se *b for menor que *c, troca os valores
    if (*b < *c) {temp = *b; *b = *c; *c = temp;} // -> a - b - c (ordem!)

}