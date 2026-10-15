#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char input;

    vector<int>ball(3);

    ball[0] = 1;

    while (cin >> input)
    {
        if (input == 'A')
        {
            swap(ball[0],ball[1]);
        }
        else if (input == 'B')
        {
            swap(ball[1],ball[2]);

        }
        else if (input == 'C')
        {
            swap(ball[0],ball[2]);
        }

    }

    if (ball[0] == 1)
    {
        cout << 1;
        return 0;
    }
    if (ball[1] == 1)
    {
        cout << 2;
        return 0;
    }
    if (ball[2] == 1)
    {
        cout << 3;
        return 0;
    }

}
