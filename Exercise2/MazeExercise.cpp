// MazeExercise.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

typedef enum { wood, stone } material;

typedef struct {
	int x, y;
	bool isWall;
	material type;
}field;

#define n 16
#define m 12
field playground[n][m];

int player_x = 5;
int player_y = 5;

void show_map(field map[n][m])
{
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (i == player_x && j == player_y)
				cout << 'O';
			else
			{
				if (map[i][j].type == stone)
					cout << '*';
				else if (map[i][j].type == wood)
					cout << ' ';

			}
		}
		cout << '\n';
	}
	cout << '\n';
}

int main() {
	char control = 'h';
	while (control != 'q')
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				playground[i][j].x = i;
				playground[i][j].y = j;
				playground[i][j].isWall = (i == 0 || i == (n - 1) || (j == 0 && i != 3) || j == (m - 1));
				if (playground[i][j].isWall && !(i == 3 && j == 0))
					playground[i][j].type = stone;
				else
					playground[i][j].type = wood;
			}
		}
		show_map(playground);

		//control = getchar();
		cin >> control;
		if (control == 'r' && playground[player_x + 1][player_y].type != stone)
			player_x += 1;
		else if (control == 'l' && playground[player_x - 1][player_y].type != stone)
			player_x -= 1;
		else if (control == 'u' && playground[player_x][player_y - 1].type != stone)
			player_y -= 1;
		else if (control == 'd' && playground[player_x][player_y + 1].type != stone)
			player_y += 1;
	}
	return 0;
}