/* Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela. */

#include <stdio.h>

int main()
{
  int count = 10;
  float arr[10], aux;

  // Receber os dados de entrada
  for (size_t i = 0; i < count; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%f", &arr[i]);
  }

  // Ordenar o vetor
  for (size_t i = 0; i < (count - 1); i++)
  {
    for (size_t j = 0; j < (count - i - 1); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
      }
    }
  }

  // Imprimir o vetor ordenado
  printf("Vetor ordenado: ");
  for (size_t i = 0; i < count; i++)
  {
    printf("%.2f ", arr[i]);
  }

  return 0;
}
