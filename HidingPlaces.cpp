#include <bits/stdc++.h>
using namespace std;

using Matrix = vector<vector<int>>;

void bfs(const pair<int,int>& horse, Matrix& matrix){
    int n = matrix.size();
    queue<pair<int,int>> q;

    q.push({horse.second, horse.first});

    vector<pair<int,int>> moves =
    {
        {2, 1}, {2, -1},
        {-2, 1}, {-2, -1},
        {1,2}, {1,-2},
        {-1,2},{-1,-2}
    };

    while (!q.empty()){
        pair<int,int> node = q.front();
        q.pop();

        for (pair<int, int> move : moves) {

        int nextRow = node.first + move.first;
        int nextCol = node.second + move.second;

        if (nextRow >= 0 && nextRow < 8 && nextCol >= 0 && nextCol < 8) {
            if (matrix[nextRow][nextCol]==-1)
            {
               matrix[nextRow][nextCol] = matrix[node.first][node.second] + 1;
               q.push({horse.second,horse.first});
            }


        }
    }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {

    const int size = 8;
    Matrix matrix(size, vector<int>(size,-1));

    pair<int,int> horse;
    char temp;
    cin >> temp >> horse.second;
    horse.second--;
    horse.first =(toupper(temp) - 'A');


    matrix[horse.second][horse.first] = 0;

    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    /*
    a horse can only do these moves
    up 2 left 1
    up 2 right 1
    left 2 up 1
    left 2 down 1
    right 2 up 1
    right 2 down 1
    down 2 left 1
    down 2 right 1
    */

    }

    return 0;
}
