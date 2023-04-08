/* Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5. */

int main(int argc, char const *argv[])
{
  int aux   = 0;

  printf("Divisores: ");
  for (int i = 1; i < 1000; i++)
    if (!(i % 3) || !(i % 5)) aux += i;

  printf("Soma dos multiplos de 3 ou 5: %d", aux);
  return 0;
}