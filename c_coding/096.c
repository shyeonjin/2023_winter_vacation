#include<stdio.h>

int main() {
	int board[20][20] = {0};
	int n,x,y;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &x, &y);
		board[x][y] = 1;

	}

	for (int i = 1; i <= 19; i++) //�� ��(������ �Ʒ���) ��
	{
		for (int j = 1; j <= 19; j++) //�� ��(���ʿ��� ����������) ��
		{
			printf("%d ", board[i][j]); //�� ���
		}
		printf("\n"); //�� �ٲٱ�
	}
}