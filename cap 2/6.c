/* Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica. */

int main(int argc, char const *argv[])
{
  double d;
  printf("Digite um numero: ");
  scanf("%lf", &d);
  printf("numero digitado: %e", d);


  return 0;
}
