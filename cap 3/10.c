/* A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
  i. O primeiro ganhador receberá 46% do total.
  ii. O segundo receberá 32% do total.
  iii. O terceiro receberá o restante. 
  
  Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#define DINHEIRO 780000.00F
int main(int argc, char const *argv[])
{
  printf("O primeiro ganhador vai receber (46%%): %.2f\n", (DINHEIRO * 46) / 100);
  printf("O segundo ganhador vai receber (32%%): %.2f\n", (DINHEIRO * 32) / 100);
  printf("O terceiro ganhador vai receber (22%%): %.2f\n", (DINHEIRO * 22) / 100);


  return 0;
}
