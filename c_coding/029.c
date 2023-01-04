#include <stdio.h>

int main() {
	double d;
	scanf_s("%lf", &d); // double(long float) 형식으로 입력
	printf("%.11lf", d);
}