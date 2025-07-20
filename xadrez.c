#include <stdio.h>

// ---------------------- TORRE ----------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ---------------------- RAINHA ----------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ---------------------- BISPO (Recursivo + Loops Aninhados) ----------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // chamada recursiva
}

void moverBispoLoops(int casas) {
    printf("Movimento do Bispo com Loops Aninhados (Diagonal Cima Direita):\n");
    for (int i = 0; i < casas; i++) {           // movimento vertical (cima)
        for (int j = 0; j < 1; j++) {           // movimento horizontal (direita)
            printf("Cima Direita\n");
        }
    }
}

// ---------------------- CAVALO ----------------------
void moverCavalo() {
    printf("Movimento do Cavalo (em 'L': 2 casas para Cima, 1 para Direita):\n");

    int direcaoVertical = 2;   // cima
    int direcaoHorizontal = 1; // direita

    for (int i = 0; i < 3; i++) { // simulação de diferentes tentativas
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {
                // simula o movimento final
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }

            // ignora posições que não representam um movimento em L
            continue;
        }
    }
}

int main() {
    // ------------------- TORRE -------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita - Recursivo):\n");
    moverTorre(casasTorre);

    printf("\n");

    // ------------------- BISPO -------------------
    int casasBispo = 5;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita - Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\n");

    moverBispoLoops(casasBispo);

    printf("\n");

    // ------------------- RAINHA -------------------
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda - Recursivo):\n");
    moverRainha(casasRainha);

    printf("\n");

    // ------------------- CAVALO -------------------
    moverCavalo();

    return 0;
}