#include<stdio.h>

int main() {

	long long a, r, n;
	scanf_s("%lld %lld %lld", &a, &r, &n);
	for (int i = 1; i < n; i++)
		a *= r;
	printf("%lld",a);
}