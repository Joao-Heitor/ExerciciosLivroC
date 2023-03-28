/* Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso. */

int main(int argc, char const *argv[])
{
  char c1, c2, c3;

  printf("Digite 3 caracteres (abc): ");
  scanf("%c%c%c", &c1, &c2 ,&c3);

  printf("%c\n%c\n%c\n", c1, c2, c3);
  return 0;
}
