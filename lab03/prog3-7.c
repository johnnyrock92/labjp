#include <stdio.h>
int main()
{
  int i=0;
  int pot=1;
  while (pot<2016){
    pot*=2;
    printf("%6d",pot);
    i++;
  }
  printf("\nWykonano %d obliczen: \n",i);

}
