#include <stdio.h>
#include <stdlib.h>

void volume(float raio){
    const double PI = 3.141592653589793;
    double volume = (4.0/3.0) * PI * raio * raio * raio;
    printf("O volume da esfera e de %.2lf", volume);
}

int main()
{
    float raio;

    puts("Insira o valor do RAIO da esfera: ");
    scanf("%f", &raio);

    volume(raio);

    return 0;
}