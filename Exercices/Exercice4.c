#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int reponse;	
	
	do {			
		printf("Combien font 2 x 2 ? "); 
		scanf("%d", &reponse);		
	
		if(reponse != 4) {			
			printf("\nFaux, recommencez\n"); 
		}
			
	} while (reponse != 4);
	
	printf("\nBravo !\n");
	
	return 0;
}
