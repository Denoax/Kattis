#include <bits/stdc++.h>
using namespace std;

bool pangram(const string& sentence, string& missing) {

    map<char, int> alphabet;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        alphabet[c] = 0;
    }

    for (char ch : sentence) {
        if (isalpha(ch)) {
            alphabet[tolower(ch)]++;
        }
    }

    for (const auto& pair : alphabet)
    {
        if (pair.second ==  0){
            missing += pair.first;
        }
    }
    return missing.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // holy shit i didnt know u can do this

    while (n--) {
        string missing;
        string input;
        getline(cin, input);

        if (pangram(input, missing)) {
            cout << "pangram" << '\n';
        } else {
            cout << "missing " << missing << '\n';
        }
    }

    return 0;
}
