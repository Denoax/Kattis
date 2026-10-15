#include <bits/stdc++.h>
using namespace std;

using Matrix = vector<vector<int>>;

void bfs(int startRow, int startCol, Matrix& distance) {
    queue<pair<int, int>> q;
    distance[startRow][startCol] = 0;
    q.push({startRow, startCol});

    vector<pair<int, int>> moves = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int row = current.first;
        int col = current.second;

        for (pair<int, int> move : moves) {
            int nextRow = row + move.first;
            int nextCol = col + move.second;

            if (nextRow >= 0 && nextRow < 8 &&
                nextCol >= 0 && nextCol < 8) {
                if (distance[nextRow][nextCol] == -1) {
                    // Record the distance and schedule this square.
                    distance[nextRow][nextCol] = distance[row][col] + 1;
                    q.push({nextRow, nextCol});
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--) {
        char column;
        int rank;
        cin >> column >> rank;

        int startRow = rank - 1;
        int startCol = column - 'a';
        Matrix distance(8, vector<int>(8, -1));
        bfs(startRow, startCol, distance);

        int farthest = 0;
        for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++) {
                farthest = max(farthest, distance[row][col]);
            }
        }

        cout << farthest;
        for (int row = 7; row >= 0; row--) {
            for (int col = 0; col < 8; col++) {
                if (distance[row][col] == farthest) {
                    cout << ' ' << char('a' + col) << row + 1;
                }
            }
        }
        cout << '\n';
    }
}
