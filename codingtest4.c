#include<stdio.h>

int main(void)
{
	int n, i, j;
	int num1 = 0;
	int num2 = 0;
	int a[1024] = { 0 };
	int b[1024] = { 0 };

	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		scanf_s("%d", &b[i]);
	}

	for (i = 0; i < n; i++) {
		if (a[i] == b[i]) {
			num1++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i] == b[j] && i != j) {
				num2++;
			}
		}
	}

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;

}