/* Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int linha = 0;
  int count = 1;

  do
  {
    printf("Digite o numero de linhas: ");
    scanf("%d", &linha);
  }while (linha < 0);

  for (size_t i = 1; i <= linha; i++)
  {
    for (size_t j = 1; j <= i; j++, count++)
    {
      printf("%d ", count);
    }
    printf("\n");
  }

  return 0;
}