/* Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A – B. Mostre na tela os dados do array C. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int arrA[10];
  int arrB[10];
  int arrC[10];

  for (size_t j = 0; j < 2; j++)
  {
    char tipo = j == 0 ? 'A' : 'B';
    for (size_t i = 0; i < 10; i++)
    {
      printf("Digite o valor para a posicao %d do array %c: ", i, tipo);
      if (tipo == 'A')
        scanf("%d", &arrA[i]);
      else
        scanf("%d", &arrB[i]);
    }
  }

  for (size_t i = 0; i < 10; i++)
  {
    arrC[i] = arrA[i] - arrB[i];
    printf("Posicao %d valor: %d\n", i, arrC[i]);
  }

  return 0;
}
