#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int scoreA=0;
    int scoreB=0;
    char Person;
    int temp=0;
    while (cin >> Person >> temp){
        if (Person == 'A')
        {
            scoreA += temp;
        }
        else
        {
            scoreB += temp;
        }

        if (scoreA == 10 && scoreB == 10)
        {
            scoreA = 9;
            scoreB = 9;
        }

        if (scoreA >= 11)
        {
            cout << "A";
            return 0;
        }
        else if (scoreB >= 11)
        {
            cout << "B";
            return 0;
        }

    }
}
