#include <stdio.h>

int main() {
	int n,k, data[10000];
	int min;
	
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &k);
		data[i] = k;
	}
	min = data[0];
	for (int i = 0; i < n; i++) {
		if (min > data[i])
		{
			min = data[i];
		}
	}
	printf("%d\n", min);

}