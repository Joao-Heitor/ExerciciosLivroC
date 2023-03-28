/* Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”. */

int main(int argc, char const *argv[])
{
  int i;

  printf("Digite um caractere: ");
  i = getchar();

  printf("\"%c\"", i);

  return 0;
}
