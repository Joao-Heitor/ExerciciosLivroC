/* Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu. */

int main(int argc, char const *argv[])
{
  int i;
  printf("Digite um numero inteiro: ");
  scanf("%d", &i);
  printf("numero digitado: %f", (float) i);

  return 0;
}
