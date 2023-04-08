/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido. */

int main(int argc, char const *argv[])
{
  int valor = 0; 
  int maior = -999999; // valor inicial para garantir que qualquer valor lido seja maior
  int menor = 999999; // valor inicial para garantir que qualquer valor lido seja menor

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor < menor) menor = valor;
    if (valor > maior) maior = valor;
  }

  printf("Valor maior: %d\n", maior);
  printf("Valor menor: %d\n", menor);

  return 0;
}