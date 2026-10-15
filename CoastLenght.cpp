#include <bits/stdc++.h>
using namespace std;

int rows, columns;
vector<string> grid;

void floodFill(int row, int column) {
    // Stop if the coordinate is outside the grid.
    if (row < 0 || row >= rows + 2||
        column < 0 || column >= columns + 2) {
        return;
    }

    // Stop on black or already-visited cells.
    if (grid[row][column] != '0') {
        return;
    }

    // Mark this white cell as visited.
    grid[row][column] = '2';

    floodFill(row - 1, column); // up
    floodFill(row + 1, column); // down
    floodFill(row, column - 1); // left
    floodFill(row, column + 1); // right
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> rows >> columns;

    grid.assign(rows + 2, string(columns + 2, '2'));

    int answer = 0;

    for (int y = 1; y <= rows; y++)
    {
        string row;
        cin >> row;

        for (int x = 1; x <= columns; x++)
        {
            grid[y][x] = row[x - 1];
        }
    }

    for (int x = 1; x <= columns; x++) {
        floodFill(1, x);
        floodFill(rows, x);
    }

    for (int y = 1; y <= rows; y++) {
        floodFill(y, 1);
        floodFill(y, columns);
    }

    for (int y = 1; y <= rows; y++) {
        for (int x = 1; x <= columns; x++) {
            if (grid[y][x] == '1') {
                answer += (grid[y - 1][x] == '2');
                answer += (grid[y + 1][x] == '2');
                answer += (grid[y][x - 1] == '2');
                answer += (grid[y][x + 1] == '2');
            }
        }
    }

    cout << answer << '\n';

    return 0;
}
