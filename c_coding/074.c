#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	do {
		printf("%d\n", a);
		--a;
	} while (a != 0);
}