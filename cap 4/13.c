/* Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado. */

int main(int argc, char const *argv[])
{
  char opcao;
  int valor1, valor2;

  printf("Selecione uma operacao matematica '+' '-' '*' '/': ");
  scanf("%c", &opcao);

  printf("\nDigite dois valores (x y): ");
  scanf("%d%d", &valor1, &valor2);

  switch (opcao)
  {
  case '+':
    printf("Resultado: %d", valor1 + valor2);
    break;

  case '-':
    printf("Resultado: %d", valor1 - valor2);
    break;

  case '*':
    printf("Resultado: %d", valor1 * valor2);
    break;

  case '/':
    printf("Resultado: %d", valor1 / valor2);
    break;
  }

  return 0;
}
