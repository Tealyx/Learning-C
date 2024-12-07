#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choixMenu;
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ?\n");
    scanf("%d", &choixMenu);
    switch (choixMenu)
    {
    case 1:
        printf("Voici votre Royal Cheese !\n");
        break;
    case 2:
        printf("Voici votre Mc Deluxe !\n");
        break;
    case 3:
        printf("Voici votre Mc Bacon !\n");
        break;
    case 4:
        printf("Voici votre Big Mac !\n");
        break;
    
    default:
        printf("Vous n'avez pas selectinner la bonne valeur...\n");
    }
    return 0;
}