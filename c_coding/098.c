#include <stdio.h>

int main()
{
	int board[100][100] = { 0 };

	int h, w, n, l, d, a ,b;
	scanf_s("%d %d", &h, &w);
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d %d %d", &l, &d, &a, &b);
		if (d == 0) {
			for (int i = 0; i< l; i++) {
				board[a][b + i] = 1;
			}
		}
		else {
			for (int j = 0; j < l; j++) {
				board[a + j][b] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}

}