/* Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos. */

int main(int argc, char const *argv[])
{
  int num1, num2;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  printf("Os numeros digitados foram : %d e %d", num2, num1);

  return 0;
}
