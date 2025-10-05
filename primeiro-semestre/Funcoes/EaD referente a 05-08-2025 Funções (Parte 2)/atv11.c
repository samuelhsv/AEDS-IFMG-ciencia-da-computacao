#include <stdio.h>

int digitos(int n){ // ja considerando a verificacao de numero inteiro positivo na main...
    if (n < 10) return 1;
    else return 1 + digitos(n/10);
}