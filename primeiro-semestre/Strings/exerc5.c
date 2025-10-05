#include <stdio.h>
#include <string.h>

int main() {
    char string[101];  // +1 pro '\0'
    char chr; 
    int i, achou = 0, descarte;

    puts("Digite a string: ");
    if (fgets(string, sizeof(string), stdin) != NULL){
        if(strchr(string,'\n') == NULL){
            while ((descarte = getchar()) != '\n' && descarte != EOF){}
        }
    } else {
        printf("Erro ao ler a string!");
        return 1;
    }

    puts("Digite o caractere: ");
    scanf("%c", &chr);

    // Procura por '\n' na string e substitui por '\0', para evitar erros de comparação no final
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') string[i] = '\0';
    }

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == chr) achou++;
    }

        printf("\"%c\" aparece %d vezes em \"%s\".\n", chr, achou, string);
    
    return 0;
}