#include <stdio.h>

int main() {
	long long  a, m, d, n;
	scanf_s("%lld %lld %lld %lld", &a, &m, &d, &n);

	for (int i = 1; i < n; i++)
	{
		a = a * m + d;
	}
	printf("%lld", a);
}