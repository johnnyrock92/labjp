#include <stdio.h>
#include <stdlib.h>
#include <strlib.h>

int main() {
    string wyraz1="ABCD";
    string wyraz2="EFGH";
    string calywyraz;
    int dlugosc;
    char ithchar;
    string chartostring;
    string substring;

    printf("wyraz1: \t%s\nwyraz2: \t%s\n\n",wyraz1,wyraz2);

    /* Concat - sluzy do laczenia dwoch lancuchow znakow
       REZULTAT: ABCDEFGH
    */
    calywyraz=Concat(wyraz1, wyraz2);
    printf("Concat: \t%s",calywyraz);
    printf("\n");

    /* StringLength - sluzy do obliczania dlugosci lancucha
       REZULTAT: 8
    */
    dlugosc=StringLength(calywyraz);
    printf("StringLength: \t%d",dlugosc);
    printf("\n");

    /* IthChar - sluzy do wskazania literki z podanego lancucha
       0 1 2 3 4 5 6 7
       A B C D E F G H
       REZULTAT: D (jako char)
    */
    ithchar=IthChar(calywyraz,3);
    printf("IthChar: \t%c",ithchar);
    printf("\n");

    /* CharToString - sluzy do zmiany typu zmiennej dla literki
       z char na string
       REZULTAT: D (jako string)
    */
    chartostring=CharToString(ithchar);
    printf("CharToString: \t%c",ithchar);
    printf("\n");

    /* SubString - sluzy do wyciagniecia podlancucha od do
       0 1 2 3 4 5 6 7
       A B C D E F G H
       REZULTAT: ABCDEF
    */
    substring=SubString(calywyraz,0,5);
    printf("SubString: \t%s",substring);
    printf("\n");

    return 0;
}
