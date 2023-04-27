/* Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números
desvio padrão = raiz quadrada [(1/n) * somatório de (v - média)^2]
em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado. */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int   count = 10;

  float avg = 0;
  float sum = 0;
  float res = 0;
  float arr[10];

  // Receber os dados de entrada
  for (size_t i = 0; i < count; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%f", &arr[i]);
    sum += arr[i];
  }

  // Calcular a média
  avg = sum / count;

  sum = 0;

  // Realizar o somatório
  for (size_t i = 0; i < count; i++)
  {
    sum += pow(arr[i] - avg, 2);
  }

  // Calcular o desvio padrao
  res = sqrt(sum / count);

  printf("O desvio padrao eh: %f", res);

  return 0;
}
