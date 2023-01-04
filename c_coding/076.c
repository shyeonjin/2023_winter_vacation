#include <stdio.h>
int main() {
	char c;
	scanf_s("%c", &c);

	for (int i = 97; i < c+1; i++)
	{
		printf("%c ", i);
	}
}