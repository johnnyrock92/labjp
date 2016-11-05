#include <stdio.h>

int main() {
    int n, suma, i;
    printf("Podaj liczbę całkowitą dodatnią:");
    scanf("%d", &n);
    suma=0;
    for (i=1;i<=n;i++) suma+=i;
    printf("Suma liczb od 1 do %d wynosi %d\n", n, suma);
    return 0;
}
