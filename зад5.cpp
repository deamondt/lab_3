#include <stdio.h>

int main ()
{
	int mas[100], i, n;
	
	printf("Vvedite n:");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		mas[i] = i;
		printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	return 0;
}
