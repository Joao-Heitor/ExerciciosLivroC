/* Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja: Hn 1 + (1 / 2) + (1 / 3) + ... + (1 / n)
Apresente um programa que calcule o valor de qualquer Hn. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int valor = 0;
  float hn  = 1.0f;

  do
  {
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
  }while (valor < 0);

  for (int i = 2; i <= valor; i++)
  {
    hn += (1.0f / i);
  }
  
  printf("Resultado: %.2f\n", hn);

  return 0;
}

