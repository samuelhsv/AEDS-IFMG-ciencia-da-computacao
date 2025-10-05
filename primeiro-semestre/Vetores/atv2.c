#include <stdio.h>
#include <math.h>

int main()
{
    int v[10], i;
    float media, soma, desvio, resultado;
    for (i=0;i<10;i++){
        printf("Valor para v[%d]: \n",i);
        scanf("%d", &v[i]);
    }
    
    soma = 0;
    desvio = 0;
    
    for (i=0;i<10;i++){
        soma = soma + v[i];
    }
    
    media = soma / 10;
    
    for (i=0;i<10;i++){
        desvio = desvio + (v[i] - media)*(v[i] - media);
    }
    
    printf("o desvio padrao foi de: %.2f", sqrt(desvio / (10-1)));
    
    return 0;
}
