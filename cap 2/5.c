/* Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu. */

int main(int argc, char const *argv[])
{
  float f;
  printf("Digite um numero flutuante: ");
  scanf("%f", &f);
  printf("numero digitado: %d", (int) f);

  return 0;
}
