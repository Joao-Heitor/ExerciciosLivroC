/* Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s. */

int main(int argc, char const *argv[])
{
  float valor;

  printf("Digite a velocidade em km/h: ");
  scanf("%f", &valor);

  printf("Velocidade em m/s: %.2f", valor / 36);
  return 0;
}
