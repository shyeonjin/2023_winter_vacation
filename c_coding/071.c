#include <stdio.h>

int main() {
	int n;
reload: //레이블은 콜론(:)으로 끝내고, 일반적으로 들여쓰기를 하지 않는다.
	scanf_s("%d", &n);
	if(n!=0)
		printf("%d\n", n);
	if (n != 0) goto reload; //reload라고 적혀있는 레이블로 실행 이동
}