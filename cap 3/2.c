/* Faça um programa que leia um número real e imprima a quinta parte desse número. */

int main(int argc, char const *argv[])
{
  float valor;

  printf("Digite um valor: ");
  scanf("%f", &valor);

  printf("Numero antecessor ao valor digitado: %.2f\n", valor / 5);

  return 0;
}
