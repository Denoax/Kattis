#include <bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    char garb;

    cin >> a >> garb >> b;

    int numerator = 5*(a - 32 * b);
    int denominator = 9*b;

    int gcd_val = gcd(numerator, denominator);
    numerator /= gcd_val;
    denominator /= gcd_val;

    cout << numerator << "/" << denominator << endl;

    return 0;
}