#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 0;
    cin >> n;

    int answer = 0;

    vector<string> wordList(n);

    for (int i = 0; i < n; i++) {
        cin >> wordList[i];
    }

    string wordLength;
    cin >> wordLength;

    for (int i = 0; i < n; i++) {

        bool matches = true;

        for (size_t j = 0; j < wordLength.size(); j++) {
            char digit = '\0';
            switch (wordList[i][j]) {
                case 'a':
                case 'b':
                case 'c':
                    digit = '2';
                    break;
                case 'd':
                case 'e':
                case 'f':
                    digit = '3';
                    break;
                case 'g':
                case 'h':
                case 'i':
                    digit = '4';
                    break;
                case 'j':
                case 'k':
                case 'l':
                    digit = '5';
                    break;
                case 'm':
                case 'n':
                case 'o':
                    digit = '6';
                    break;
                case 'p':
                case 'q':
                case 'r':
                case 's':
                    digit = '7';
                    break;
                case 't':
                case 'u':
                case 'v':
                    digit = '8';
                    break;
                case 'w':
                case 'x':
                case 'y':
                case 'z':
                    digit = '9';
                    break;
            }
            if (digit != wordLength[j]) {
                matches = false;
                break;
            }
        }
        if (matches) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
