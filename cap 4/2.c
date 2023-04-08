/* Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”. */

int main(int argc, char const *argv[])
{
  int valor1, valor2;

  printf("Digite dois valores (a b): ");
  scanf("%d%d", &valor1, &valor2);

  if (valor1 == valor2) 
    printf("Numeros iguais");
  else if (valor1 > valor2) 
    printf("Maior valor: %d", valor1);
  else 
    printf("Maior valor: %d", valor2);
  
  

  return 0;
}
