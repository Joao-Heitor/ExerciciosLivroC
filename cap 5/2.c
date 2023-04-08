/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite uma valor inteiro: ");
  scanf("%d", &valor);

  for (int i = valor; i >= 0; i--)
  {
    printf("%d ", i);
  }
  
  return 0;
}
