/* Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit. */

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);

  printf("Complemento do valor: %d\n", ~valor);

  return 0;
}
