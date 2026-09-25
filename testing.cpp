#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >>n;

    priority_queue<
    pair<int,int>, 
    vector<pair<int,int>>, 
    greater<pair<int,int>>
    > pq;    

    int temp1;
    int temp2;

    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;

        pq.emplace(temp1,temp2);
    }
    
    cout << "--------------" << "\n";

    for (int i = 0; i < n; i++)
    {
        pair<int,int> currentTop = pq.top();
        cout << currentTop.first << " " << currentTop.second << "\n";
        pq.pop();   
        
    }
    

    return 0;
}