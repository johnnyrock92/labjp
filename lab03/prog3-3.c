/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int i;
   i=4;
   while (i>=0) {
     printf ("%4d ",tabela[i]);
     i--;
   }
   printf("\n");
   return 0;
}
