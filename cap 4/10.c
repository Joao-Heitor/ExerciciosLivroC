/* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir: 
  1.Geometrica    x * y * z
  2.Ponderada     (x + 2 * y + 3 * z) / 6
  3.Harmonica     1 / ((1 / x) + (1 / x) + (1 / x))
  4. Aritimetica  (x + y + z) / 3
*/

int main(int argc, char const *argv[])
{
  int opcao, valor1, valor2, valor3;

  printf("Selecione uma operacao de media 1.Geometrica 2.Ponderada 3.Harmonica 4.Aritimetica: ");
  scanf("%d", &opcao);

  printf("Digite tres valores (x y z): ");
  scanf("%d%d%d", &valor1, &valor2, &valor3);
  printf("%d%d%d\n", valor1, valor2, valor3);

  switch (opcao)
  {
  case 1:
    printf("1.Geometrica: %d", valor1 * valor2 * valor3);
    break;

  case 2:
    printf("2.Ponderada: %.2f", (float) (valor1 + 2 * valor2 + 3 * valor3) / 6);
    break;

  case 3:
    printf("3.Harmonica: %.2f", (float) 1 / ((1 / valor1) + (1 / valor2) + (1 / valor3)));
    break;

  case 4:
    printf("4.Aritimetica: %.2f", (float) (valor1 + valor2 + valor3) / 3);
    break;
  }

  return 0;
}
