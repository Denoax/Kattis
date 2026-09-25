#include <bits/stdc++.h>
using namespace std;

int rows, columns;
vector<string> grid;

void floodFill(int startRow, int startColumn) {
    queue<pair<int, int>> q;

    q.push({startRow, startColumn});
    grid[startRow][startColumn] = '#';

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        int row = current.first;
        int column = current.second;

        int newRow = row - 1;
        int newColumn = column;

        if(newRow >= 0 && grid[newRow][newColumn] == '-'){
            grid[newRow][newColumn] == '#';
            q.push({newRow, newColumn});
        }

        int rowChange[]    = {-1, 1,  0, 0};
        int columnChange[] = { 0, 0, -1, 1};

        for (int direction = 0; direction < 4; direction++) {
        int newRow = row + rowChange[direction];
        int newColumn = column + columnChange[direction];

        if (newRow >= 0 && newRow < rows && newColumn >= 0 && newColumn < columns && grid[newRow][newColumn] == '-') {

            grid[newRow][newColumn] = '#';
            q.push({newRow, newColumn});
        }
    }
}
}
int main(){

    int caseNumber = 1;
    while(cin >> rows >> columns){

    int stars = 0;
    grid.resize(rows);

    for (int i = 0; i < rows; i++)
    {
        cin >> grid[i];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (grid[i][j] == '-')
            {
                stars++;
                floodFill(i,j);
            }
            
        }
        
    }
    
    cout << "Case " << caseNumber << ": "<<stars<<endl;
    caseNumber++;
}

    return 0;
}