#include <bits/stdc++.h>
using namespace std;

int main(){

    int lenght;
    cin >> lenght;

    int positionEncrpted;
    cin >> positionEncrpted;

    vector<char> inputstring(lenght);

    for(int i = 0; i < lenght; i++){
        cin >> inputstring[i];
    }

    vector<char> answer;

    int index = 0;

    while(!inputstring.empty()){

        index = (index + positionEncrpted - 1) % inputstring.size();

        answer.push_back(inputstring[index]);

        inputstring.erase(inputstring.begin() + index);
    }

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i];
    }

    cout << endl;

    return 0;
}