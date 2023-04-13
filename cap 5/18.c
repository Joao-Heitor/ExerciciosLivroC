/* Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não. */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int valor = 0;
  int primo = 1;

  do
  {
    printf("Digite um número inteiro maior do que 1: ");
    scanf("%d", &valor);
  } while (valor <= 1);

  for (int i = 2; i <= sqrt(valor); i++) 
  {
    if (valor % i == 0) 
    {
      primo = 0;
      break;
    }
  }

  if (primo) printf("O numero e primo.\n");
  else printf("O numero nao e primo.\n");

  return 0;
}
