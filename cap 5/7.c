/* Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela. */

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

  printf("Valor final: %d", valor);

  return 0;
}
