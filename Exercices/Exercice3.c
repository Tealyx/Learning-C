#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;

    printf("Ecrit un nombre pour voir si il est Pair ou Impair : \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Le nombre est Pair\n");
    }
    else
    {
        printf("Le nombre est Impair\n");
    }

    return 0;
}