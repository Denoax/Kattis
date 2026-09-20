#include <bits/stdc++.h>
using namespace std;

int rows, columns;
vector<string> grid;

void floodFill(int row, int column) {
    // Stop if the coordinate is outside the grid.
    if (row < 0 || row >= rows ||
        column < 0 || column >= columns) {
        return;
    }

    // Stop on black or already-visited cells.
    if (grid[row][column] != '-') {
        return;
    }

    // Mark this white cell as visited.
    grid[row][column] = '#';

    floodFill(row - 1, column); // up
    floodFill(row + 1, column); // down
    floodFill(row, column - 1); // left
    floodFill(row, column + 1); // right
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