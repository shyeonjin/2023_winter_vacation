#include <stdio.h>

int main() {
	int n = 1; //ó�� ���� �˻縦 �Ѿ�� ���� 0�� �ƴ� �� �Է�
	
	while (n != 0)
	{
		scanf_s("%d", &n);
		if (n!=0)
			printf("%d\n", n);
	}
}