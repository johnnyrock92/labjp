#include <stdio.h>
int main() {
  int ile;
  int i, j;
  ile = 18;
  for (i=0; i<8; i++){
    if (i%2) for (j=0; j<ile; j++) printf(" *");
    else for (j=0;j<ile;j++) printf("* ");
    printf("\n");
  }

  return 0;
}
