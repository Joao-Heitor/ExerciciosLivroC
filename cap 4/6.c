/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7 */

int main(int argc, char const *argv[])
{
  char sex;
  float  altura;

  printf("Digite o sexo, M ou F, e a altura (S H): ");
  scanf("%c%f", &sex, &altura);

  if (sex == 'M')
    printf("Seu peso ideal: %.2f", (72.7 * altura) - 58);
  else
    printf("Seu peso ideal: %.2f", (62.1 * altura) - 44,7);

  return 0;
}
