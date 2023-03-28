/*  Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\). */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int dia, mes, ano;
  printf("Digite uma data (dia mes ano): ");
  scanf("%d %d %d", &dia, &mes, &ano);
  
  printf("Data formatada: %d/%d/%d", dia, mes, ano);
  return 0;
}
