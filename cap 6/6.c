/* Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor. */

#include <stdio.h>
#include <ctype.h>

int main() {
  int valores[10], pares = 0;

  for (int i = 0; i < 10; i++) {
    char entrada[10];

    do {
      printf("Digite um numero inteiro para a posicao %d: ", i);
      scanf("%s", entrada);
    } while (!isdigit(entrada[0]));

    valores[i] = atoi(entrada);

    if (valores[i] % 2 == 0) {
      pares++;
    }
  }

  printf("Foram digitados %d valores pares.\n", pares);

  return 0;
}
