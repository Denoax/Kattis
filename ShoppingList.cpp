#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Read the input, solve the problem, and print the answer here.
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int first,  second;
    cin >> first >> second;

    string input;
    unordered_set<string> common;

    for (int i = 0; i < first; i++)
    {
        unordered_set<string> next;
        for (int j = 0; j < second; j++)
        {
            cin >> input;
            if (i == 0 || common.count(input) != 0)
            {
                next.insert(input);
            }

        }
        common.swap(next);
    }

    vector<string> answer(common.begin(), common.end());
    sort(answer.begin(), answer.end());

    cout << answer.size() << '\n';

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << '\n';
    }


    solve();
    return 0;
}
