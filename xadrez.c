#include <stdio.h>

int main() {
    // ------------------- TORRE -------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ------------------- BISPO -------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while(contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ------------------- RAINHA -------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < casasRainha);

    printf("\n");

    // ------------------- CAVALO -------------------
    int passosVerticais = 2;
    int passosHorizontais = 1;

    printf("Movimento do Cavalo (em 'L': 2 casas para Baixo, 1 para a Esquerda):\n");

    for(int i = 0; i < passosVerticais; i++) {
        printf("Baixo\n");

        if (i == passosVerticais - 1) {
            int j = 0;
            while(j < passosHorizontais) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}