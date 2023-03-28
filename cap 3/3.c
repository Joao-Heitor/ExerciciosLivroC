/* Faça um programa que leia três valores inteiros e mostre sua soma */

int main(int argc, char const *argv[])
{
  int valor1, valor2, valor3;

  printf("Digite tres valores (1 2 3): ");
  scanf("%d%d%d", &valor1, &valor2, &valor3);

  printf("Soma dos valores digitados: %d", valor1 + valor2 + valor3);
  return 0;
}
