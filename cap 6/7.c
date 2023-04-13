/* Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor[10];
  int maior = -999999;
  int menor = 999999;

  for (size_t i = 0; i < 10; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &valor[i]);

    if (valor[i] > maior)
      maior = valor[i];
    if (valor[i] < menor)
      menor = valor[i];
  }


  printf("\nMaior valor: %d", maior);
  printf("\nMenor valor: %d", menor);

  return 0;
}