#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	do {
		--a;
		printf("%d\n", a);
		
	} while (a !=0);
}