#include <stdio.h>

int main() {
	int n;
reload: //���̺��� �ݷ�(:)���� ������, �Ϲ������� �鿩���⸦ ���� �ʴ´�.
	scanf_s("%d", &n);
	if(n!=0)
		printf("%d\n", n);
	if (n != 0) goto reload; //reload��� �����ִ� ���̺��� ���� �̵�
}