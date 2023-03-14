#include "stdio.h"

void hello(void) {
   printf ("Hello, Word!\n");
}

int main(void)
{

  for (int i = 0; i < 10; i++){
   hello();
  }
  
  return 0;
}
