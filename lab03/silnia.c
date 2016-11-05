#include <stdio.h>
int main() {
   int n;
   long long int silnia;
   int i;

   printf("Podaj liczbe naturalna: ");
   scanf("%d", &n);
   silnia = 1;
   for (i=1;i<=n;i++) silnia=silnia*i;
   /*silnia=n;
   while (n>0) {silnia=silnia*n;n--;};*/
   printf("\nsilnia z %d wynosi %lld\n", n, silnia);
   return 0;
}
