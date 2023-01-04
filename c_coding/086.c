#include<stdio.h>

int main() {

	long long w, h, b;
	double a;
	scanf_s("%lld %lld %lld", &w, &h, &b);
	
	a = (w * h * b);
	printf("%.02lf MB", a/(8*1024*1024));

}