/* Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar. */

int main(int argc, char const *argv[])
{
  int valor1;

  printf("Digite um valor: ");
  scanf("%d", &valor1);

  if (valor1 % 2)
    printf("Numero Impar");
  else
    printf("Numero par");

  return 0;
}
