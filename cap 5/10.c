/* Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média. */

int main(int argc, char const *argv[])
{
  int valor = 0; 
  int aux   = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor inteiro: ");
    scanf("%d", &aux);

    if (aux > 0) valor += aux;
    else i--;

  }

  printf("Valor final: %d", valor / 10);

  return 0;
}