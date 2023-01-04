#include<stdio.h>

int main() {
	long long a, b;
	scanf_s("%lld %lld", &a, &b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf\n", a+b,a-b,a*b,a/b,a%b,(float)a/b);
	return 0;
}