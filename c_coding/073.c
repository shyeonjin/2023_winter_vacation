#include <stdio.h>

int main() {
	int n = 1; //처음 조건 검사를 넘어가기 위해 0이 아닌 값 입력
	
	while (n != 0)
	{
		scanf_s("%d", &n);
		if (n!=0)
			printf("%d\n", n);
	}
}