#include<stdio.h>

int main(void)
{
	int a[128];
	int i;
	int k = 0;

	for (i = 0; i < 10; i++) {
    	scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 3; i++) {
		k = a[k];
	}

	printf("%d\n", k);

	return 0;

}