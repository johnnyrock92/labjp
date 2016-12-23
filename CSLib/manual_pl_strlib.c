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
    bool stringequal;
    int stringcompare;

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

    /* StringEqual - sluzy do porownania dwoch lancuchow
       Jeżeli są takie same zwraca 1, czyli (True)
       Jeżeli nie są te same zwraca 0, czyli (False)
    */
    stringequal=StringEqual(wyraz1, wyraz2);
    if (stringequal == 1)
      printf("StringEqual: \t%d (True)", stringequal);
    else
      printf("StringEqual: \t%d (False)", stringequal);
    printf("\n");

    /* StringCompare - sluzy do porownania dwoch lancuchow
       Jeżeli np. rezultat wynosi -4 to oznacza ze lancuchy roznia sie 4 znakami
       Jeżeli np. rezultat wynosi 0 to oznacza ze lancuchy sa takie same i nie roznia sie znakami
    */
    stringcompare=StringCompare(wyraz1, wyraz2);
    if (stringcompare < 0)
      printf("StringCompare: \t%d (Lancuchy sie roznia)", stringcompare);
    else
      printf("StringCompare: \t%d (Lancuchy sa takie same)", stringcompare);
    printf("\n");

    return 0;
}
