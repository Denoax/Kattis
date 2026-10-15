#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int array[5];
    int temp[5];
    for (int i = 0; i < 5; i++)
    {
        int value = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> temp[j];
        }
        value = accumulate(temp, temp+4,0);
        array[i] = value;
    }

    auto maxIt = max_element(array, array +5);
    cout << (maxIt - array)+1 << " " <<*maxIt << '\n';
    return 0;
}
