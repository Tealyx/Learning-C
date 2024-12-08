#include <stdio.h>
#include <stdlib.h>

double division(double a, double b)
{
    return a / b;
}

int main()
{
    double a = 0, b = 0, resultat = 0;

    printf("Ecrit un premier nombre a diviser : \n");
    scanf("%lf", &a);
    printf("Ecrit un deuxieme nombre a diviser : \n");
    scanf("%lf", &b);

    if (b == 0 || a == 0)
    {
        printf("Erreur : division par 0");
    }
    else
    {
        resultat = division(a, b);
        printf("La division de ses deux nombres est : %lf\n\n", resultat);
    }

    return 0;
}