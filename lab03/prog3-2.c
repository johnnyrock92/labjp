/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {
   // Deklaracja zmiennej tabela[] z przypisaniem cyfr do niej należących
   // indeks       0  1  2  3   4
   int tabela[] = {1, 2, 4, 6, 12};
   // Deklaracja zmiennej i, zliczającej ilość przejść pętli
   int i;

   // Pierwsza opcja
   // dla i=0; dopóki 'i' jest mniejsze od 5; zwiększaj 'i' o jeden
   for (i=0;i<5;i++)
   // wyświetl na ekranie cyfrę z tabeli o indeksie 4, potem 3, potem 2,...
      printf ("%4d ",tabela[4-i]);
      printf("\n");

   // Druga opcja
   // dla i=4; dopóki 'i' jest większe lub równe 0; zmniejszaj 'i' o jeden
   for (i=4;i>=0;i--)
   // wyświetl na ekranie cyfrę z tabeli o indeksie 4, potem 3, potem 2,...
      printf ("%4d ",tabela[i]);
      printf("\n");
   return 0;
}
