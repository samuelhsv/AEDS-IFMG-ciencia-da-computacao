#include <stdio.h>
#include <stdlib.h>

int expo(int a, int n){
    int resultado = 1; // só pra pode ter uma variavel pra armazenar o resultado
    while (n > 0) { 
        if (n%2==1) resultado = resultado*a; // se o expoente for ímpar, o resultado vai ser multiplicado pela base de novo
        resultado = resultado*resultado; // se o exponte for par, ele já multiplica o resultado por ele mesmo
        n = n/2; 
    }
    return resultado;
}

int main()
{
    int a, n;
    puts("Digite o numero da BASE e do EXPOENTE: ");
    if (scanf("%d %d", &a, &n) != 2) { // se o programa nao conseguir ler os 2 dois numeros
        puts("Entrada invalida: informe dois valores inteiros");
        return 1; // retorna um tipo de erro
    } else if (n < 0) {// exponte negativo
        puts("Entrada invalida: informe um expoente inteiro e positivo");
        return 2; // retorna outro tipo de erro
    }

    printf("%d", expo(a, n));

    return 0;
}