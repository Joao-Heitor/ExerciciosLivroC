/*  Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: h = √(a² + b²)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado. */

#include <math.h>

int main(int argc, char const *argv[])
{
  float valor1, valor2;

  printf("Digite o valor dos catetos (a b): ");
  scanf("%f%f", &valor1, &valor2);

  printf("Valor da hipotenusa: %f", sqrt(pow(valor1, 2) + pow(valor2, 2)));
  return 0;
}