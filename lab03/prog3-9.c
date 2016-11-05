#include <stdio.h>
int main() {

  int a, b;
  int liczba,j=0;
  int ile;
  ile = 15;
  printf("Podaj dwie liczby całkowite: ");
  scanf("%d %d", &a, &b);
  for (j=0;j<ile;j++) printf("----");
  printf("\n");
  liczba=a;
  while (liczba<=b) {
    printf("%4d", liczba);
    liczba++;j++;
    if (j%ile==0) printf("\n");
  }
  //for (i=a; i<=b; i++) printf("%5d", i);
  printf("\n");
  return 0;
}
