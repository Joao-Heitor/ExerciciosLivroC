/* Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares. */

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite uma valor inteiro: ");
  scanf("%d", &valor);

  for (int i = 0; i <= valor; i++)
  {
    if (i % 2) printf("%d ", i);
  }
  
  return 0;
}
