#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;

    vector<int> temperature(n);

        for (int i = 0; i < n; i++)
        {
            cin >> temperature[i];
        }

        for (int i = 0; i < temperature.size(); i++)
        {
            if (temperature[i] < 0)
            {
                count++;
            }

        }


    cout << count;

    return 0;
}
