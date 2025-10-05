#include <stdio.h>

int mdc(int a, int b) 
{ 
    // O MDC de qualquer número e zero é o próprio número
    if (a == 0) 
       return b; // retorna o outro que nao é zero
    if (b == 0) 
       return a; // retorna o outro que nao é zero
  
    // caso base 
    if (a == b) // se os numeros foram iguais, é o MDC (pelo algoritmo de Euclides)
        return a; 
  
   
    if (a > b)  
        return mdc(a-b, b); // se a for maior, subtrai ele por b...
    return mdc(a, b-a); // se b for maior, subtrai ele por a até alcançar a == b
}           