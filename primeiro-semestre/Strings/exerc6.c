#include <stdio.h>
#include <string.h>

int main() {
    char busca[6];  // +1 pro '\0'
    char texto[21]; // +1 pro '\0'
    int i, j, achou, descarte;

    printf("Digite a string de busca (ate 5 caracteres): ");
    if (fgets(busca, sizeof(busca), stdin) != NULL){
        if(strchr(busca,'\n') == NULL){
            while ((descarte = getchar()) != '\n' && descarte != EOF){}
        }
    } else {
        printf("Erro ao ler a string!");
        return 1;
    }

    printf("Digite o texto (ate 20 caracteres): ");
    if (fgets(texto, sizeof(texto), stdin) != NULL){
        if(strchr(texto,'\n') == NULL){
            while ((descarte = getchar()) != '\n' && descarte != EOF){}
        }
    } else {
        printf("Erro ao ler a string!");
        return 1;
    }
    
    // Procura por '\n' na string e substitui por '\0', para evitar erros de comparação no final
    for (i = 0; busca[i] != '\0'; i++) {
        if (busca[i] == '\n') busca[i] = '\0';
    }
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') texto[i] = '\0';
    }

    achou = 0;

    // Começa da posição i na string principal...
    for (i = 0; texto[i] != '\0'; i++) {
        // e vai comparando desde i inicial + j atual 
        for (j = 0; busca[j] != '\0'; j++) {
            if (texto[i + j] != busca[j]) { // se nao tiver achado nenhuma letra igual...
                break; //sai do for interno
            }
        }

        // Se percorreu toda a a string principal e nao quebrou o for interno...
        if (busca[j] == '\0') { // e a letra atual da busca (depois do ultimo j++) for igual a '\0'...
            achou = 1; // achou !!!
            break;
        }
    }

    if (achou) {
        printf("\"%s\" esta contida em \"%s\".\n", busca, texto);
    } else {
        printf("\"%s\" NAO esta contida em \"%s\".\n", busca, texto);
    }

    return 0;
}