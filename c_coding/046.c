#include <stdio.h>

int main() {
	long long a, b, c;
	
	scanf_s("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n%.1lf\n", a + b + c, (float)(a + b + c) / 3);
	return 0;
}