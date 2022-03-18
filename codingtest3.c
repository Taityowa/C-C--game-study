#include<stdio.h>

int main(void)
{
	int a, b;

	scanf_s("%d %d", &a, &b);

	if (b == 10 && a == 1) {
		printf("Yes");
	}
	else if (b - a == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;

}