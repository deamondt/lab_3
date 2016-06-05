#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	double mas[100], n;
	int i;
	
	printf("Vvedite n:");
	scanf("%lf", &n);
	
	srand(time(0));
	
	for(i = 0; i < 20; i++) {
		mas[i] = ((float)rand() / RAND_MAX) * n;
		printf("\nmas[%d] = %lf", i, mas[i]);
	}
	
	return 0;
}


