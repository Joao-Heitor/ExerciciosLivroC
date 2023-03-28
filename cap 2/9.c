/* Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos. */

int main(int argc, char const *argv[])
{
  float f1, f2;
  printf("Digite o dois valores (f1 f2): ");
  scanf("%f %f", &f1, &f2);
  
  printf("Os numeros digitados foram : %f e %f", f2, f1);

  return 0;
}
