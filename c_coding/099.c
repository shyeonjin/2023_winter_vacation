#include <stdio.h>

int main() {
	int board[11][11];
	int x = 2, y = 2;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf_s("%d ", &board[i][j]);
		}
	}
	while (1) {
		if (board[x][y] == 0) {
			board[x][y] = 9;
			y++;
		}
		if (board[x][y] == 1) {
			x++;
			y--;
		}
		if (board[x][y] == 2) {
			board[x][y] = 9;
			break;
		}
		else if (board[x][y + 1] == 1 && board[x + 1][y] == 1) {
			if (board[x][y] == 0) {
				board[x][y] = 9;
			}
			break;
		}
	}

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
	}


