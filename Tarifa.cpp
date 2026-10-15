#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,n;
    cin >> x >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int answer = 0;

    /*
    cout << answer << endl;
    cout << x << endl;
    cout << p[0] << endl;
    */

    for (int i = 0; i < n; i++)
    {
        answer += (x - p[i]);
        //cout << "Test " << i << " " << answer << '\n';
    }

    cout << answer+x << '\n';

    return 0;
}
