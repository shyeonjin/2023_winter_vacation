#include <stdio.h>

int main() {
	int ans,sum;
	sum = 0;
	scanf_s("%d", &ans);


	for (int i = 0; i < ans + 1; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
}