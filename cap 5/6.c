/* Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem. */

int main(int argc, char const *argv[])
{
  printf("INICIO!\n");

  for (int i = 10; i >= 0; i--)
    printf("%d\n", i);

  printf("FIM!");

  return 0;
}
