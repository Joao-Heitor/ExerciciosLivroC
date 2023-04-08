/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
MG: 7% SP: 12% RJ: 15% MS: 8%
*/

#define MG 7
#define SP 12
#define RJ 15
#define MS 8

int main(int argc, char const *argv[])
{
  float valor;
  int estado;

  printf("Digite o valor e o codigo do estado (1 MG, 2 SP, 3 RJ, 4 MS) (V E): ");
  scanf("%f%d", &valor, &estado);

  switch (estado)
  {
  case 1:
    valor += (valor * MG) / 100;
    printf("Valor do produto R$ %.2f", valor);
    break;

  case 2:
    valor += (valor * SP) / 100;
    printf("Valor do produto R$ %.2f", valor);
    break;

  case 3:
    valor += (valor * RJ) / 100;
    printf("Valor do produto R$ %.2f", valor);
    break;

  case 4:
    valor += (valor * MS) / 100;
    printf("Valor do produto R$ %.2f", valor);
    break;
  
  default:
    printf("Estado nao compativel");
    break;
  }

  return 0;
}

