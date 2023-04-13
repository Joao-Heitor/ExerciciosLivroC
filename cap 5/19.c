/* Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não. 

S = (1 / 1) + (3 / 2) + (5 / 2) ... (99 / 55)
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  float valor = 1;

  for (int i = 1, j = 1; i <= 55; i++, j += 2) 
    valor += j / i;

  printf("Valor de S: %.2f", valor);

  return 0;
}
