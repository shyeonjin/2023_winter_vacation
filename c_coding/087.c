#include <stdio.h>

int main() {
	int ans;
	long long sum;
	sum = 0;
	scanf_s("%d", &ans);	
	for (long long i = 1; i < 100000000; i++)
	{
		sum += i;
		if (sum >= ans)
			break;
	}
	printf("%d", sum);
}