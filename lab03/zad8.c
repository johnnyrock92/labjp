#include <stdio.h>
int main() {
  int i, j;
  for (i=0; i<4; i++){
    for (j=0; j<=i; j++) putchar('*');
    printf("\n");
  }
  printf("\n");
  for (i=0; i<4; i++){
    for (j=0; j<4-i; j++) putchar('*');
    printf("\n");
  }
  printf("\n");
  for (i=0; i<4; i++){
    j=0;
    /*while (j<i) {putchar(' ');j++;}
    while (j<4) {putchar('*');j++;}*/
    for (j=0; j<i; j++) {
      if(j<i) putchar(' ');
      else putchar('*');
    printf("\n");
  }
  printf("\n");
  for (i=0; i<4; i++){
    for (j=0; j<=i; j++) putchar('*');
    printf("\n");
  }
  return 0;
}
