/* Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321 */

int main(int argc, char const *argv[])
{
  int valor;
  char str[4], strC[4];

  printf("Digite um valor inteiro de 3 digitos: ");
  scanf("%d", &valor);

  sprintf(str, "%d", valor);

  for (int i = 0, n = 2; i < 3; i++, n--)
  {
    strC[i] = str[n];
  }
  
  printf("Valor inverso: %s", strC);
  return 0;
}