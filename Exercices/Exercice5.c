#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int reponse, compteur = 1;	
	
	do {			
		printf("Combien font 2 x 2 ? "); 
		scanf("%d", &reponse);		
	
		if(reponse != 4) {			
			printf("\nFaux, recommencez\n"); 
			compteur++;
		}
			
	} while (reponse != 4);
	
	printf("\nBravo ! Tu as réussi en %d essais !\n", compteur);
	
	return 0;
}
