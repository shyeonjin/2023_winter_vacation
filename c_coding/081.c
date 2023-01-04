#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	for (int i = 1; i < a + 1; i++)
	{
		for (int j = 1; j < b + 1; j++)
		{
			printf("%d %d\n", i, j);
		}
	}
}