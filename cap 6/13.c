/* Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int arr[10];
  bool ctrl = true;

  for (size_t i = 0; i < 10;)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &arr[i]);

    for (size_t j = 0; j < i; j++)
    {
      if (arr[j] == arr[i])
      {
        printf("Digite um valor diferente\n");
        ctrl = false;
        break;
      }
    }

    if (ctrl) i++;
    ctrl = true;
  }

  for (size_t i = 0; i < 10; i++)
  {
    printf("Valor da posicao %d: %d\n", i, arr[i]);
  }

  return 0;
}
