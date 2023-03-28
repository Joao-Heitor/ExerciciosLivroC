/* Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits). */

int main(int argc, char const *argv[])
{
  int valor;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);

  printf("Seu produto: %d\n", valor << 1);

  printf("Seu quociente: %d", valor >> 1);
  return 0;
}