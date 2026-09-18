#include <bits/stdc++.h>
using namespace std;
int main(){


    int studentTotal = 0;
    cin >> studentTotal;



    while(studentTotal != 0){

        vector<string> names(studentTotal);
        int sortingCeiling = 2;

        for(int i=0; i<studentTotal; i++){
            cin >> names[i];
        }

        stable_sort(names.begin(), names.end(), [sortingCeiling](const string& a, const string& b) {
        return a.substr(0, sortingCeiling) < b.substr(0, sortingCeiling);
        });

        for(const auto& name : names){
            cout << name << endl;
        }

        cout << endl;

        cin >> studentTotal;
    }


    return 0;
}
