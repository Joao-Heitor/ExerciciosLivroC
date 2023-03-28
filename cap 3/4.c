/* Leia quatro valores do tipo float. Calcule e exiba a média aritmética decsses valores. */

int main(int argc, char const *argv[])
{
  float valor1, valor2, valor3, valor4;

  printf("Digite tres valores (1 2 3 4): ");
  scanf("%f%f%f%f", &valor1, &valor2, &valor3, &valor4);

  printf("Media dos valores digitados: %f", (valor1 + valor2 + valor3 + valor4) / 4);
  return 0;
}
