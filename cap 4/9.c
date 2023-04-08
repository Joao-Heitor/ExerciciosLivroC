/* Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

     Altura      |                  Peso                         |
                 | Até 60 | Entre 60-90(inclusive) | Acima de 90 |
Menor do que 1,20|    A   |           D            |      G      |
Entre 1,20 e 1,70|    B   |           E            |      H      |
Maior do que 1,70|    C   |           F            |      I      |
 */

int main(int argc, char const *argv[])
{
  float altura, peso;

  printf("Digite a altura e o peso (a p): ");
  scanf("%f%f", &altura, &peso);

  if (altura < 1.20)
  {
    if (peso <=  60)
      printf("A");
    else if (peso <= 90)
      printf("D");
    else
      printf("G");
  }
  else if (altura < 1.71)
  {
    if (peso <=  60)
      printf("B");
    else if (peso <= 90)
      printf("E");
    else
      printf("H");
  }
  else
    if (peso <=  60)
      printf("C");
    else if (peso <= 90)
      printf("F");
    else
      printf("I");

  return 0;
}