/* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */

int main(int argc, char const *argv[])
{
  printf("Os 50 primeiros numeros pares: ");

  for (int i = 0; i <= 50; i++)
    if (!(i % 2)) printf("%d ", i);

  return 0;
}
