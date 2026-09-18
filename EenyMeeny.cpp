#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    int spaceCount = 1;
    for (char c : s) {
        if (std::isspace(static_cast<unsigned char>(c))) {
            spaceCount++;
        }
    }

    int n;
    cin >> n;

    vector<string> kids;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        kids.push_back(name);
    }

    vector<string> position;

    int currentPosition = 0;

    while (!kids.empty()) {

    int nextPosition = (currentPosition + spaceCount - 1) % kids.size();
    position.push_back(kids[nextPosition]);
    kids.erase(kids.begin() + nextPosition);

    currentPosition = nextPosition;
}

    vector<string> teamA;
    vector<string> teamB;


    for (size_t i = 0; i < position.size(); i++) {
        if (i % 2 == 0) {
            teamA.push_back(position[i]);
        } else {
            teamB.push_back(position[i]);
        }
    }

    cout << size(teamA) << endl;
    for (size_t i = 0; i < teamA.size(); i++) {
    cout << teamA[i] << endl;
    }

    cout << size(teamB) << endl;

    for (size_t i = 0; i < teamB.size(); i++) {
    cout << teamB[i] << endl;
    }

    return 0;
}
