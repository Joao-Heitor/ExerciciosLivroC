/* Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso. */

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite uma letra maiuscula: ");
  valor =  getchar();

  printf("A letra minuscula e: %c", valor + 32);
  return 0;
}