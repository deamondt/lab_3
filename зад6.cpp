#include <stdio.h>

int main ()
{
	int mas[100];
	int i, a, b, n;
	
	printf("Vvedite a: ");
	scanf("%d", &a);
	printf("Vvedite b: ");
	scanf("%d", &b);
	
	for(i = 0, n = a; n <= b; i++, n++) {
		mas[i] = n;
		printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	return 0;
}
