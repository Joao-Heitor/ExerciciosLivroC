/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado. */

#include <math.h>

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite um valor: ");
  scanf("%d", &valor);

  if (valor > 0)
  {
    printf("Quadrado do numero: %.2lf\n", pow(valor, 2));
    printf("Raiz quadrado do numero: %.2lf", sqrt(valor));
  }
  else 
    printf("Valor menor que 1");

  return 0;
}
