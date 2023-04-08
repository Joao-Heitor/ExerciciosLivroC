/* Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
  Categoria   Idade
  Infantil A  5-7
  Infantil B  8-10
  Juvenil A   11-13
  Juvenil B   14-17
  Sênior      +18
*/

int main(int argc, char const *argv[])
{
  int idade;

  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);

  if (4 < idade && idade < 8)
    printf("Infantil A");
  else if (7 < idade && idade < 11)
    printf("Infantil B");
  else if (10 < idade && idade < 14)
    printf("Juvenil A");
  else if (13 < idade && idade < 18)
    printf("Juvenil B");
  else if (idade > 17);
    printf("Senior");

  return 0;
}

