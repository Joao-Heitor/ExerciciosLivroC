/* Faça um programa que leia dois números e mostre qual deles é o maior. */

int main(int argc, char const *argv[])
{
  int valor1, valor2;

  printf("Digite dois valores (a b): ");
  scanf("%d%d", &valor1, &valor2);

  valor1 > valor2 ? printf("Maior valor: %d", valor1) : printf("Valor maior: %d", valor2);
  
  return 0;
}