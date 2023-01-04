#include <stdio.h>

int main() {
	char c;
	do {
		scanf_s(" %c",&c);
		printf("%c\n",c);
	} while (c != 'q');
}