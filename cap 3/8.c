/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

int main(int argc, char const *argv[])
{
  float valor;

  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &valor);

  printf("Temperatura em graus Fahrenheit: %.2f", valor * (9.0/5.0) + 32.0);
  return 0;
}

