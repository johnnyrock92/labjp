#include <stdio.h>

int main()
{
  int n1i, n2i, n3i;
  float n1f, n2f, n3f;

  /*integer*/
  n1i=5+3*8/2-3;
  n2i=2%2+2*2-2/2;
  n3i=2*4*(5+9/2);

  /*float*/
  n1f=5+3*8/2-3;
  n2f=2%2+2*2-2/2;
  n3f=2*4*(5+9/2);

  /*Wynik w integer*/
  printf("n1 = %d, n2= %d, n3= %d", n1i, n2i, n3i);
  printf("\n");
  /*Wynik w float*/
  printf("n1 = %.1f, n2= %.1f, n3= %.1f", n1f, n2f, n3f);
  printf("\n");

  printf("L1=%d, L2=%d", 3/2, (-3)/2);
  printf("\n");
  return 0;
}
