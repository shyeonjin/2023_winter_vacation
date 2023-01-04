#include<stdio.h>

int main() {
	int r, g, b;
	int count = 0;
	scanf_s("%d %d %d", &r, &g, &b);

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < g; j++)
		{
			for (int a = 0; a < b; a++)
			{
				printf("%d %d %d\n", i, j, a);
				count += 1;
			}
		}
	}
	printf("%d", count);
	return 0;
}