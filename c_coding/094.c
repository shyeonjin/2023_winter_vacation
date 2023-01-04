#include <stdio.h>

int main() {
	int n,g;
	

	int data[10000];
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d ",&g);
		data[i] = g;
	}


	for (int j = n - 1; j >= 0; j--)
	{
		printf("%d ", data[j]);
	}
}
