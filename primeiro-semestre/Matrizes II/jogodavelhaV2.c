#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int verificarVencedor(char tabuleiro[3][3]) {
    int i;

    // Verifica linhas e colunas
    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' && // se a posição tabuleiro[i][0] nao for vazia...
            tabuleiro[i][0] == tabuleiro[i][1] && // e o que tiver nela for igual ao que tem ao lado dela (tabuleiro[i][1])...
            tabuleiro[i][1] == tabuleiro[i][2]) { // e igual ao que tem em no lá no outro lado (tabuleiro[i][2])...
            return 1; // retornar que alguem venceu
        }

        if (tabuleiro[0][i] != ' ' && // se a posição tabuleiro[0][i] nao for vazia...
            tabuleiro[0][i] == tabuleiro[1][i] && // e o que tiver nela for igual ao que tem embaixo dela (tabuleiro[1][i])...
            tabuleiro[1][i] == tabuleiro[2][i]) { // e igual ao que tem em no lá embaixo (tabuleiro[2][i])...
            return 1; // retornar que alguem venceu
        }
    }

    // Diagonais
    if (tabuleiro[0][0] != ' ' &&
        tabuleiro[0][0] == tabuleiro[1][1] && // diagonal principal
        tabuleiro[1][1] == tabuleiro[2][2]) {
        return 1;
    }

    if (tabuleiro[0][2] != ' ' &&
        tabuleiro[0][2] == tabuleiro[1][1] && // diagonal secundaria
        tabuleiro[1][1] == tabuleiro[2][0]) {
        return 1;
    }

    return 0; // se ninguem tiver ganho, ninguém venceu
}

void bot(char tabuleiro[3][3], int *linhaBot, int *colunaBot) { // declara os ponteiros linhaBot/colunaBot apontando para linha/coluna da funcao main
    int i, j;

    // 1. Verificar se pode GANHAR em alguma jogada
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') { // verifica se é um lugar vazio...
                tabuleiro[i][j] = 'O'; // faz uma jogada temporaria...
                if (verificarVencedor(tabuleiro)) { // e manda pra verificacao
                    *linhaBot = i; // se ele tiver ganhado, devolve qual linha o bot escolheu
                    *colunaBot = j; // com a coluna a mesma coisa
                    tabuleiro[i][j] = ' '; // desfaz jogada temporária se ele tiver ganhado
                    return; // fecha a funcao
                } else {
                    tabuleiro[i][j] = ' '; // desfaz jogada temporária se ele não tiver ganhado
                    // return; -> nao pode ter return aqui se nao ele faz nao as outras verificacoes
                }
            }
        }
    }

    // 2. Bloquear o adversário (X)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') { // vai rodar até achar um espaço vazio..
                tabuleiro[i][j] = 'X'; // e marcar um X
                if (verificarVencedor(tabuleiro)) { // depois mandar pra verificar se o oponente ganharia...
                    *linhaBot = i; // se o oponente tiver ganhado, ele marcará nessa linha...
                    *colunaBot = j; // e nessa coluna
                    tabuleiro[i][j] = ' '; // desfaz jogada temporária do X se o oponente tiver ganhado
                    return;
                } else {
                    tabuleiro[i][j] = ' '; // desfaz jogada temporária do X se o oponente nao tiver ganhado
                    // return; -> mesma coisa pra esse return aqui
                }
            }
        }
    }

    // 3. Se não tem jogada crítica, joga aleatoriamente
    do {
        *linhaBot = rand() % 3; // gera uma linha aleatoria...
        *colunaBot = rand() % 3; // e uma coluna aleatoria...
    } while (tabuleiro[*linhaBot][*colunaBot] != ' '); // até achar uma posicao aleatoria vazia
}

int main() {
    char tabuleiro[3][3], jogador, humano;
    int i, j, linha, coluna, valida, venceu, jogadas;
    srand(time(NULL)); // define a seed do gerador de numeros aleatorios, que usa o tempo atual do sistema
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            tabuleiro[i][j] = ' ';
        }
    }
    
    if (rand() % 2 == 0) {
        jogador = 'X';
        humano = 'X';
    } else {
        jogador = 'O';
        humano = 'O';
    }
    valida = 0;
    jogadas = 0;
    venceu = 0;
    
    

    printf("\n");
    printf("   1    2    3\n");
    for (i=0;i<3;i++){ // inicializar o tabuleiro
        printf("%d   ", i+1);
        for (j=0;j<3;j++){
            printf("%c", tabuleiro[i][j]);
            if (j<2){
                printf(" | ");
            }
        }
        if (i<2){
            printf("\n");
            printf("  -------------");
            printf("\n");
        }
    }

                   
    
    while(jogadas < 9){
        while(!valida){ // pedir e verificar a jogada
            if (jogador == humano) {
                // Jogador humano
                printf("\nJogador %c, faca sua jogada: ", jogador);
                printf("\n");
                printf("Linha: ");
                scanf("%d", &linha);
                printf("Coluna: ");
                scanf("%d", &coluna);
                printf("\n");
                linha--; // tira 1 da linha
                coluna--; // tira 1 da coluna
                if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' '){
                    printf("Jogada invalida!\n");
                } else { // se a jogada for válida
                    valida = 1;
                    tabuleiro[linha][coluna] = jogador;
                    jogadas++;
                }
            } else { // se jogador != 'X', ou seja, == 'O'...
                bot(tabuleiro, &linha, &coluna); // chama a jogada do bot, passando por referencia as variaveis linha e coluna
                tabuleiro[linha][coluna] = jogador;
                jogadas++;
                valida = 1;
            }
            
        }
        valida = 0;
        
        printf("\n");
        
        // Exibir tabuleiro se os dois tiverem jogado ou se der velha
        if (jogadas % 2 == 0 || jogadas == 9){
            printf("\n");
            printf("   1    2    3\n");
            for (i=0;i<3;i++){ // inicializar o tabuleiro
                printf("%d   ", i+1);
                for (j=0;j<3;j++){
                    printf("%c", tabuleiro[i][j]);
                    if (j<2){
                    printf(" | ");
                    }
                }
                if (i<2){ // imprime as divisoes depois das duas primeiras linhas
                    printf("\n");
                    printf("  -------------");
                    printf("\n");
                }
            }
        }
    
        
        venceu = verificarVencedor(tabuleiro); 
        
        if (venceu){  // verificar ganhador
            printf("\nO jogo acabou!\nO ganhador foi o %c", jogador);
            break;
        } else if (jogadas == 9){
            printf("\nO jogo acabou!\nVelha!");
            break;
        }
        
        
        jogador = (jogador == 'X') ? 'O' : 'X';  // trocar jogador com operador ternario
        
    }
    return 0;
}

