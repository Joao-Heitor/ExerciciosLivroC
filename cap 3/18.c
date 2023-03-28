/* Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo. */

int main(int argc, char const *argv[])
{
  int valor1, valor2;

  printf("Digite dois valores inteiro: ");
  scanf("%d%d", &valor1, &valor2);

  printf("Deslocamento a esquerda: %d\n", valor1 << valor2);
  printf("Deslocamento a direita: %d\n", valor1 >> valor2);

  return 0;
}
