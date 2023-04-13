/* Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor E, conforme a fórmula a seguir:
  E = (1/1!) + (1/2!) + (1/3!) + ... + (1/n!)
 */

#include <stdio.h>

int main() 
{
    int n        = 0;
    float E      = 1.0f;
    int fatorial = 1;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        fatorial *= i;
        E += 1.0f / fatorial;
    }

    printf("Valor de E: %.2f\n", E);

    return 0;
}

