#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  srand(time(NULL));
  int usr=0, numero=(rand()%100) + 1, compteur=0;
  while (usr != numero) {
    printf("Trouve le bon numéro entre 1 et 100 :");
    scanf("%d", &usr);
    if (usr == numero) {
        compteur++;
        printf("Bravo, tu as gagné en %d essais !\n", compteur);
    }
    if (usr > numero) {
        printf("Plus petit !\n");
        compteur++;
    }
    if (usr < numero) {
        printf("Plus grand !\n");
        compteur++;
    }
  }
  return 0;
}
