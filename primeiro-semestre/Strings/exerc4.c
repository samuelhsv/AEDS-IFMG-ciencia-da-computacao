#include <stdio.h>
#include <string.h>

int main(){
    char str1[11], str2[11]; // +1 pro terminador nulo
    int descarte, i = 0;

    puts("Digite a 1a palavra: ");
    if (fgets(str1, sizeof(str1), stdin) != NULL){
	    if(strchr(str1,'\n') == NULL){
		    while ((descarte = getchar()) != '\n' && descarte != EOF){}
	    }
    } else {
        puts("Erro ao ler a 1a string!");
        return 1;
    }

    puts("Digite a 2a palavra: ");
    if (fgets(str2, sizeof(str2), stdin) != NULL){
	    if(strchr(str2,'\n') == NULL){
		    while ((descarte = getchar()) != '\n' && descarte != EOF){}
	    }
    } else {
        puts("Erro ao ler a 2a string!");
        return 1;
    }

    for (i=0; str1[i] != '\0';i++){ // se tiver '\0' na string o for já para nele...
        if (str1[i] == '\n') str1[i] = '\0'; // se nao tiver, ele roda ate achar '\n' e bota '\0' no lugar
    }

    for (i=0; str2[i] != '\0';i++){
        if (str2[i] == '\n') str2[i] = '\0';   
    }

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]){ // o while só funciona enquanto as strings nao terminaram e os caracteres são iguais
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] == '\0'){ // se chegou no final das duas strings ao mesmo tempo
        puts("As duas strings são iguais!"); 
    } else if (str1[i] == '\0'){ // se chegou no fim da primeira string
        printf("%s vem antes de %s", str1, str2);
    } else {
    printf("%s vem antes de %s", str2, str1); // se chegou no fim da segunda string
    }   

    return 0;
}