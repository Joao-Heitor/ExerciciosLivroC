/* Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor[6];

  for (size_t i = 0; i < 6; i++)
  {
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor[i]);
  }

  printf("Valores recebidos: \n");

  for (size_t i = 0; i < 6; i++)
  {
    printf("%d a", valor[i]);
  }
  

  return 0;
}