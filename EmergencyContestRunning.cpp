#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;

    long long destination = n - 1;
    long long shortcut = k + 1 + destination % k;
    cout << min(destination, shortcut) << '\n';

    return 0;
}
