/* Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor = 0;
  int maior = -999999; // valor inicial para garantir que qualquer valor lido seja maior
  int menor = 999999; // valor inicial para garantir que qualquer valor lido seja menor

  do
  {
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor > 0)
    {
      if (valor < menor) menor = valor;
      if (valor > maior) maior = valor;
    }

  } while (valor >= 0);

  printf("Maior valor lido: %d\n", maior);
  printf("Menor valor lido: %d\n", menor);

  return 0;
}
