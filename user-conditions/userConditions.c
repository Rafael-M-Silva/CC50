#include "stdio.h"

int main(void)
{
  char nome[20] = ("oi tudo bem?");
  printf("qual e o seu nome? ");
  gets(nome);

  printf("%s" " Seja bem-vindo!", nome);

  if (nome == 'rafael') {
    printf("\n""seu nome e lindo");
  }else {
    printf ("\n""seu nome nao e lindo");
  }
      /* if (nome == 's') {
        printf ("Você continuou!");
      }else if (nome == 'n') {
        printf ("Você recusou!");
      } */
      return 0;
}
