/* Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.” */

int main(int argc, char const *argv[])
{
  int valor1, valor2;

  printf("Digite o valor do salario do trabalhador: ");
  scanf("%d", &valor1);

  printf("Digite o valor da prestacao do emprestimo: ");
  scanf("%d", &valor2);

  if (valor2 < ((valor1 * 20) / 100)) 
    printf("Empretimo concedido");
  else 
    printf("Empretimo nao concedido");

  return 0;
}
