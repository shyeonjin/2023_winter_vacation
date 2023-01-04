#include <stdio.h>

int main() {
	int ans;
	scanf_s("%d", &ans);

	for (int i = 1; i <= ans; i++)
	{
		if (i % 3 != 0) {
			printf("%d ", i);
		}
	}
}