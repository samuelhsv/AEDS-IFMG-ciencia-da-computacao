#include <stdio.h>

struct Data{
    int dia;
    int mes;
    int ano; // bissexto -> 
};

int main (){
    struct Data data;
    puts("Digite o dia: ");
    scanf("%d", &data.dia);
    puts("Digite o mes: ");
    scanf("%d", &data.mes);
    puts("Digite o ano: ");
    scanf("%d", &data.ano);

    if (data.ano <= 2025 && data.ano >= 0){
        // mes com 31 dias
        if (data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 || data.mes == 8 || data.mes == 10 || data.mes == 12){ 
            if (data.dia >= 1 && data.dia <= 31){
                puts("Data valida!");
            } else {
                puts("ERRO: Data com dia invalido!");
            }
        // mes com dia 30 dias
        } else if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11){ 
            if (data.dia >= 1 && data.dia <= 30){
                puts("Data e valida!");
            } else {
                puts("ERRO: Data com dia invalido!");
            }
        // fevereiro
        } else if (data.mes == 2){ 
            // é ano bissexto
            if ((data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0)){ 
                if (data.dia >= 1 && data.dia <= 29){
                puts("Data valida!");
            } else {
                puts("ERRO: Data com dia invalido!");
            }
            // nao é ano bissexto    
            } else { 
                if (data.dia >= 1 && data.dia <= 28){
                puts("Data valida!");
            } else {
                puts("ERRO: Data com dia invalido!");
            }
            }
        // mes invalido
        } else {
            puts("ERRO: Data com mes invalido!");
        }
    
    } else {
        puts("ERRO: Data com ano invalido!");
    }
}