/* Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

int main(int argc, char const *argv[])
{
  int valor = 0;
  int prev  = 0;
  int next  = 1;
  int aux   = 0;

  do
  {
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
  } while (valor < 0);

  if (valor)
  {
    if (valor == 1) aux = next;
    else
      for (int i = 0; i <= valor; i++)
      {
        aux  = prev + next;
        prev = next;
        next = aux;
      }
  }

  printf("O %dº termo da sequência de Fibonacci é %d\n", valor, aux);

  return 0;
}