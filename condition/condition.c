#include "stdio.h"

int main(void)
{
  int x = 20;
  int y = 20;

  if (x > y) {
    printf ("X é maior que Y");
  }else if (x < y) {
    printf ("X é menor que Y");
  } else {
    printf ("São o mesmo valor");
  }
  return 0;
}

