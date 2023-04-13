/* Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário. */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int valor    = 0;
  int numLidos = 0;
  int maisLido = 0;

  int maior = -999999;
  int menor = 999999;

  printf("Digite um numero inteiro para a quantidade de numeros lidos: ");
  scanf("%d", &numLidos);

  for (size_t i = 0; i < numLidos; i++)
  {
    printf("Digite um numero inteiro maior do que 1: ");
    scanf("%d", &valor);

    if (valor > maior)
    {
      maior = valor;
      maisLido++;
    }
    if (valor < menor)
    {
      menor = valor;
    }
  }

  printf("Maior numero: %d foi lido: %d vezes.\n", maior, maisLido);
  printf("Menor numero: %d.\n", menor);

  return 0;
}