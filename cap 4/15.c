/* Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como x = (-b ± √Δ) / (2a)
em que ∆ = b2 – 4 * a * c e ax2 + bx + c = 0 repdeltaenta uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais. Imprima as raízes. */

#include <math.h>

int main(int argc, char const *argv[])
{
  int a, b, c;
  double delta, resA, resB;

  printf("Digite um valor inteiro (a b c): ");
  scanf("%d%d%d", &a, &b, &c);

  if (a != 0)
  {
    delta = pow(b, 2) - (4 * (a * c));
    printf("delta %.2lf\n", delta);
    if (delta < 0)
      printf("Nao existe raiz");
    else
    {
      resA = ((-b + sqrt(delta)) / (2 * a));
      resB = ((-b - sqrt(delta)) / (2 * a));

      if (delta == 0)
      {
        printf("Raiz unica\n");
        printf("%.2lf e %.2lf", resA, resB);
      }
      else
      {
        printf("Tem duas raizes\n");
        printf("%.2lf e %.2lf", resA, resB);
      }
    }
  }
  else
    printf("Nao e equaçao de segundo grau");

  return 0;
}
