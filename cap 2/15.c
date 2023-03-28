/* Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis. */

int main(int argc, char const *argv[])
{
  char  c;
  int   i;
  float f;

  printf("Digite 3 valores (char int float): ");
  scanf("%c%d%f", &c, &i, &f);

  printf("%c %d %f \n", c, i, f);

  printf("%c\t%d\t%f \n", c, i, f);

  printf("%c\n%d\n%f", c, i, f);
  return 0;
}
