#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numerator;
    int denominator;
    int extraNumber = 0;

    while(cin >> numerator >> denominator){

    if (numerator == 0 && denominator == 0)
    {
        return 0;
    }

    while (numerator >= denominator)
    {
        extraNumber++;
        numerator = numerator - denominator;

    }

    cout << extraNumber << " " << numerator << " / " <<  denominator << '\n';
    extraNumber = 0;
    }
}
