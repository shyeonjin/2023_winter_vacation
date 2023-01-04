#include<stdio.h>

int main() {
	int ans, sum,i;
	scanf_s("%d", &ans);
	sum = 0;
	i = 1;
	do {
		sum += i;
		i++;

	} while (ans > sum);
	printf("%d", i-1);
}