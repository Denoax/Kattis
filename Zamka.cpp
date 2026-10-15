#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L,D,X;
    cin >> L >> D >> X;

    for (int number = L; number <= D; number++) {
    string digits = to_string(number);
    int sum = 0;

    for (char digit : digits) {
        sum += digit - '0';
    }

    if (sum == X) {
        cout << number << '\n';
        break;
    }
    }

    for (int number = D; number >= L; number--) {
    string digits = to_string(number);
    int sum = 0;

    for (char digit : digits) {
        sum += digit - '0';
    }

    if (sum == X) {
        cout << number << '\n';
        break;
    }
    }

    return 0;
}
