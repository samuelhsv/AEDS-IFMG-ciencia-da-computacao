#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int main(){
    struct Ponto ponto[2];
    puts("Digite as coodernadas do ponto A:");
    printf("x: ");
    scanf("%d", &ponto[0].x);
    printf("y: ");
    scanf("%d", &ponto[0].y);
    puts("Digite as coodernadas do ponto B:");
    printf("x: ");
    scanf("%d", &ponto[1].x);
    printf("y: ");
    scanf("%d", &ponto[1].y);

    printf("A distancia do ponto A ate o ponto B e: (%d, %d)", ponto[1].x-ponto[0].x, ponto[1].y-ponto[0].y);

    return 0;
} 