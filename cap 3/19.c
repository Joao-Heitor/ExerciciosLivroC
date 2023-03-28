/* Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.. */

int main(int argc, char const *argv[])
{
  int valor1, valor2;

  printf("Digite dois valores inteiro: ");
  scanf("%d%d", &valor1, &valor2);

  printf("ou exclusivo: %d\n", valor1 ^ valor2);
  printf("ou: %d\n", valor1 | valor2);
  printf("e: %d\n", valor1 & valor2);

  return 0;
}
