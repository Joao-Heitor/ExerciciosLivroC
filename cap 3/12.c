/*  Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: v = π * raio2 * altura. em que π = 3.141592 */

#include <math.h>

#define PI 3.141592f

int main(int argc, char const *argv[])
{
  float valor1, valor2;

  printf("Digite o valor da altura do circulo: ");
  scanf("%f", &valor1);

  printf("Digite o valor do raio do circulo: ");
  scanf("%f", &valor2);

  printf("Volume do cilindro circular: %f", PI * pow(valor2, 2) * valor1);
  return 0;
}