/* Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor. */

int main(int argc, char const *argv[])
{
  int i;

  printf("Digite um valor: ");
  scanf("%d", &i);

  printf("Numero antecessor ao valor digitado: %d\n", i - 1);
  printf("Numero sucessor ao valor digitado: %d\n", i + 1);

  return 0;
}
