#include <stdio.h>

int main ()
{
	int i;
	double mas[100];
	double a;

	
	for(i = 0, a = -10; a < 10; a = a + 0.1, i++) {
		mas[i] = a;
		printf("%.1lf\n", a);
	}	
	
	return 0;
}
