/* Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor[5];
  float aux = 0;

  for (size_t i = 0; i < 5; i++)
  {
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor[i]);
  }

  printf("Valores recebidos: \n");

  for (size_t i = 0; i < 5; i++)
  {
    printf("%d ", valor[i]);
    aux += (float) valor[i];
  }

    printf("\nMedia dos valores recebidos: %f", aux / 5);

  return 0;
}