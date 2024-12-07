#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=0, b=0, resultat=0;
  printf("Entre le premier nombre a additionner :");
  scanf("%d", &a);
  printf("Entre le deuxieme nombre a additionner :");
  scanf("%d", &b);
  resultat = a + b;
  printf("Le resultat est : %d\n", resultat);
  return 0;
}
