#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 0;
    cin >> n;
    vector<int> studentCount(n + 1, 0);

    for(int i=0; i<(n / 2) + 1; i++){

        int student1 = 0;
        int student2 = 0;

        cin >> student1 >> student2;

        studentCount[student1]++;
        studentCount[student2]++;
    }

    int firstStudent = 0;
    int secondStudent = 0;

    for(int student=1; student<=n; student++){

        if(studentCount[student] == 2){

            if(firstStudent == 0){

                firstStudent = student;
            }
            else{

                secondStudent = student;
            }
        }
    }

    cout << firstStudent << " " << secondStudent << endl;

    return 0;
}