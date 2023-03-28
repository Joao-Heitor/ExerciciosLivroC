/* Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf(). */

int main(int argc, char const *argv[])
{
  int i;
  printf("Digite um numero inteiro: ");
  scanf("%d", &i);
  printf("Valor lido: %d", i);

  return 0;
}
