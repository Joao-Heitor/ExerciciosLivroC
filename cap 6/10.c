/* Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela. */

#include <stdio.h>

#include <stdio.h>

int main() {
    int vetor[100];
    int i, n;

    for (i = 0, n = 1; i < 100; n++) {
        if (n % 7 != 0) {
            vetor[i] = n;
            i++;
        }
    }

    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
