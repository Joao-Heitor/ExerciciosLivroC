/* Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */

int main(int argc, char const *argv[])
{
  int valor = 0; 

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);

  printf("Divisores: ");
  for (int i = 1; i <= valor; i++)
    if (!(valor % i)) printf("%d ", i);

  return 0;
}