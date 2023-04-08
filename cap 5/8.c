/* Faça um programa que leia 10 inteiros e imprima sua média. */

int main(int argc, char const *argv[])
{
  int valor = 0; 
  int aux   = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor inteiro: ");
    scanf("%d", &aux);
    valor += aux;
  }

  printf("Meida final: %.2f", (float) valor / 10);

  return 0;
}