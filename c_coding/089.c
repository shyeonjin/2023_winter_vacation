#include <stdio.h>

int main() {
	int a, d, n;
	scanf_s("%d %d %d", &a, &d, &n);

	printf("%d", a + (d * (n-1)));
}