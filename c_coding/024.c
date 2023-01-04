#include <stdio.h>

int main() {
	char data[21]="";
	scanf_s("%s", &data);
	for (int i = 0; i < 21; i++)
	{
		if (data[i] == '\0')
		{
			break;
		}
		printf("\'%c\'\n", data[i]);
	}
	return 0;
}