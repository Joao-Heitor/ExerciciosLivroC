/*  Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois. */

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);

  if (!(valor % 3) && !(valor % 5))
    printf("E divisivel por ambos");
  else if (!(valor % 3))
    printf("E divisivel por 3");
  else if (!(valor % 5))
    printf("E divisivel por 5");
  else
    printf("Nao e divisivel por nenhum dos dois");

  return 0;
}