/* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592. */

#define PI 3.141592f

int main(int argc, char const *argv[])
{
  float valor;

  printf("Digite o angulo em graus: ");
  scanf("%f", &valor);

  printf("Valor em radianos: %f", valor * (PI / 180));
  return 0;
}
