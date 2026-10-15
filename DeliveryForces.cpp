#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> ppl(n);
    for (int i = 0; i < n; i++) {
        cin >> ppl[i];
    }
    sort(ppl.begin(), ppl.end());
    long long count = 0;
    for (int i = 0; i < n / 3; i++) {
        // Pair each median with a larger value and one unused smallest value.
        count += ppl[n - 2 - 2 * i];
    }
    cout << count << '\n';
    return 0;
}
