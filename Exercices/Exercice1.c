#include <stdio.h>
#include <stdlib.h>

int multiplication(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 0, b = 0, resultat = 0;

    printf("Ecrit un premier nombre a multiplier : \n");
    scanf("%d", &a);
    printf("Ecrit un deuxieme nombre a multiplier : \n");
    scanf("%d", &b);

    resultat = multiplication(a, b);
    printf("La multiplication de ses deux nombres est : %d\n\n", resultat);

    return 0;
}