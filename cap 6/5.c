/* Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor[8], x, y;

  for (size_t i = 0; i < 8; i++)
  {
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor[i]);
  }

  do
  {
    printf("Digite dois valores de 0 a 7 para X Y: ");
    scanf("%d %d", &x, &y);
  } while (x < 0 || x > 7 || y < 0 || y > 7);

  printf("A soma dos valores nas posicoes %d e %d eh: %d\n", x, y, valor[x] + valor[y]);

  return 0;
}
