#include <stdio.h>

int main() {
	int  a, b, c, d;
	scanf_s("%d %d %d", &a, &b,&c);
	d = (a < b) ? (a<c)?a:c : (b>c)?c:b;
	printf("%d", d);
	return 0;
}