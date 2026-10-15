#include <bits/stdc++.h>
using namespace std;

int main() {
    string wordOne, wordTwo;
    cin >> wordOne >> wordTwo;

    reverse(wordOne.begin(),wordOne.end());
    reverse(wordTwo.begin(),wordTwo.end());

    int numberOne = stoi(wordOne);
    int numberTwo = stoi(wordTwo);

    if (numberOne >= numberTwo)
    {
        cout << numberOne;

    }
    else
    {
        cout << numberTwo;
    }
    return 0;
}
