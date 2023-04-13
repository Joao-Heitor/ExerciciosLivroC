/* Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor[10];
  int soma         = 0;
  int qntNegativos = 0;

  for (size_t i = 0; i < 10; i++)
  {
    printf("Digite o valor para a posicao %d", i);
    scanf("%d", &valor[i]);
  }

  for (size_t i = 0; i < 10; i++)
  {
    if (valor[i] > 0)
      soma += valor[i];
    else if (valor[i] < 0)
      qntNegativos++;
  }

  printf("Quantidade dos valores negativos: %d\n", qntNegativos);
  printf("Soma dos valores positivos: %d\n", soma);

  return 0;
}