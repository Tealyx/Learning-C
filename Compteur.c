#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compteur = 10;

    while (compteur != 0)  // Boucle While
    {
        printf("%d\n", compteur);
        compteur--;
    }

    printf("%d\n\n", compteur);

    for (int compteur2 = 0 ; compteur2 != 11; compteur2++) // Boucle For
    {
        printf("%d\n", compteur2);
    }

    return 0;
}