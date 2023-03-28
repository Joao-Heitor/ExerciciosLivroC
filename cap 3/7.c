/* Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. */

#define DOLAR 5.20f

int main(int argc, char const *argv[])
{
  float valor;

  printf("Digite o valor em R$: ");
  scanf("%f", &valor);

  printf("Valor em $: %.2f", valor / DOLAR);
  return 0;
}
