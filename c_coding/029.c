#include <stdio.h>

int main() {
	double d;
	scanf_s("%lf", &d); // double(long float) �������� �Է�
	printf("%.11lf", d);
}