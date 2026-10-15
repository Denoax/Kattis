#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<pair<int, int>> v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i].first;
        v[i].second = 0;
    }

    int m = 0;
    for (int i = 1; i <= n; ++i) {
        if (v[i].second == 0) {
            int cur = i, len = 0;
            while (v[cur].second == 0) {
                v[cur].second = -1;
                cur = v[cur].first;
                len++;
            }
            v[++m].second = len;
        }
    }

    /*
    for (int i = 1; i <= m; ++i) {
        for (int j = i + 1; j <= m; ++j) {
            if (v[i].second < v[j].second) {
                int tmp = v[i].second;
                v[i].second = v[j].second;
                v[j].second = tmp;
            }
        }
    }
    */

    sort(v.begin() + 1, v.begin() + m + 1,
     [](const auto& a, const auto& b) {
         return a.second > b.second;
     });

    for (int i = 1; i <= m; ++i) {
        if (v[i].second == k) {
            cout << 0 << "\n";
            return 0;
        }
    }

    if (v[1].second > k) {
        cout << 1 << "\n";
        return 0;
    }

    int sum = 0, cnt = 0;
    for (int i = 1; i <= m; ++i) {
        sum += v[i].second;
        cnt++;
        // An overshoot is valid: choose the captain partway through the first cycle.
        if (sum >= k) break;
    }

    cout << cnt - 1 << "\n";

    return 0;
}
