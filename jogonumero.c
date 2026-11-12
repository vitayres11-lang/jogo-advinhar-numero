#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ 
    srand(time(NULL));
    int num, palpite, nivel, maximo;
    int tentativas = 0;

    printf("=== JOGO DE ADVINHAR O NUMERO ===\n");
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Facil (1 a 5)\n");
    printf("2 - Medio (1 a 20)\n");
    printf("3 - Dificil (1 a 100)\n");
    printf("opçao: ");
    scanf("%d", &nivel);

    if(nivel == 1) {
        maximo = 5;
    } else if (nivel == 2) {
        maximo = 20;
    } else if (nivel == 3) {
        maximo = 100;
    } else {
        printf("Opcao invalida! usando o nivel facil.\n");
        maximo = 5;
    }

    num = rand() % maximo + 1;

    do { 
        printf("\nInforme um valor de 1 ate %d: ", maximo);
        scanf("%d", &palpite);
        tentativas++;

        if(palpite > num) {
            printf("Seu palpite e maior que o numero sorteado.\n");
        } else if (palpite < num) {
            printf("Seu palpite e menor que o numero sorteado.\n");
        } else {
            printf("Parabens! Voce acertou o numero %d em %d tentativas.\n", num, tentativas);
        }


    }while(palpite != num);

    printf("O numero sorteado era: %d\n", num);
    printf("numero de tentativas: %d\n", tentativas);

    return 0;
}
