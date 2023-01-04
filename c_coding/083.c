#include <stdio.h>

int main() {
	int ans;
	scanf_s("%d", &ans);
	
	for (int i = 1; i < ans + 1; i++)
	{
		if (i % 3 == 0)
			printf("%c ", 'X');
		else
			printf("%d ", i);
	}
}