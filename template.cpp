#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) static_cast<int>((x).size())

template <class T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

template <class T>
bool ckmin(T& current, const T& candidate) {
    if (candidate >= current) return false;
    current = candidate;
    return true;
}

template <class T>
bool ckmax(T& current, const T& candidate) {
    if (candidate <= current) return false;
    current = candidate;
    return true;
}

void solve() {
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
