/* Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592. */
#include <math.h>

#define PI 3.141592f

int main(int argc, char const *argv[])
{
  float valor;

  printf("Digite o valor do raio do circulo: ");
  scanf("%f", &valor);

  printf("Area do circulo: %f", PI * pow(valor, 2));
  return 0;
}
