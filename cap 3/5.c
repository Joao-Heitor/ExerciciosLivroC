/* Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. */

#define ANO 2023

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite sua idade: ");
  scanf("%d", &valor);

  printf("Provavel ano de nascimento: %d", ANO - valor);
  return 0;
}
