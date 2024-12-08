#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b)
{
    return a + b;
}    

int soustraction(int a, int b)
{
    return a - b;
}    

int multiplication(int a, int b)
{
    return a * b;
}    

int division(double a, double b)
{
    return a / b;
}    

int main(int argc, char *argv[])
{
    int nombre_a = 0, nombre_b = 0, resultat = 0;
    
    printf("Entrez un premier nombre : ");
    scanf("%d", &nombre_a);
    
    printf("Entrez un deuxieme nombre : ");
    scanf("%d", &nombre_b);
    
    resultat = addition(nombre_a, nombre_b) + multiplication(nombre_a, nombre_b);
    printf("Le resultat de ce nombre est %d\n", resultat);
    
    return 0;
}