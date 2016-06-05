#include <stdio.h>

int main()
{
	int mas[100], i;
	int size;
	
	printf("Array size: ");
	scanf("%d", &size);
	
	for (i = 0; i < size; i++){
		scanf("%d", &mas[i]);
	}
	
	for (i = 0; i < size; i++){
		printf ("\nmas[%d] = %d", i, mas[i]);
	}
	
	return 0;
}
