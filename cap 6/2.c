/* Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa. */

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

  for (size_t i = 6; i > 0; i--)
  {
    printf("%d ", valor[i - 1]);
  }
  

  return 0;
}