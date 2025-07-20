#include <stdio.h>

int main() {
    // ------------------- TORRE -------------------
    // A Torre move-se em linha reta horizontal ou vertical.
    // Simulação: 5 casas para a direita usando 'for'.
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha separadora para clareza visual
    printf("\n");

    // ------------------- BISPO -------------------
    // O Bispo move-se na diagonal.
    // Simulação: 5 casas na diagonal para cima e à direita usando 'while'.
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while(contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ------------------- RAINHA -------------------
    // A Rainha pode mover-se em todas as direções.
    // Simulação: 8 casas para a esquerda usando 'do-while'.
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < casasRainha);

    return 0;
}