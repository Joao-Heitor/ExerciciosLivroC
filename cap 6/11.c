/* Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números. */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int arrA[20];
  int arrB[20];

  for (size_t i = 0; i < 20; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &arrA[i]);
    arrB[i] = pow(arrA[i], 2);
  }

  for (size_t i = 0; i < 20; i++)
  {
    printf("Valor para a posicao %d do array A: %d\n", i, arrA[i]);
    printf("Valor para a posicao %d do array B: %d\n", i, arrB[i]);
  }

  return 0;
}
