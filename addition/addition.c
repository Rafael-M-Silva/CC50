#include <stdio.h>

int main(void)
{
  int num1,num2;

  printf("Digite um numero: ");
  scanf("%i", &num1);
  printf("Digite outro numero: ");
  scanf("%i", &num2);

  printf("A soma do numero 1 e 2 é: %i\n", num1+num2);
  return 0;
}
