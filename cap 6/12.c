/* Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int arr[10];
  int repetidos[10];
  int num_repetidos = 0;

  for (size_t i = 0; i < 10; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &arr[i]);
  }

  printf("Valores repetidos: \n");
  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = i + 1; j < 10; j++)
      if (arr[i] == arr[j]) {
        int ja_repetido = 0;
        for (size_t k = 0; k < num_repetidos; k++) {
          if (repetidos[k] == arr[i]) {
            ja_repetido = 1;
            break;
          }
        }
        if (!ja_repetido) {
          repetidos[num_repetidos++] = arr[i];
          printf("%d\n", arr[i]);
        }
      }
  }

  return 0;
}
