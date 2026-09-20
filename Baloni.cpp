#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int maxHeight = *max_element(h.begin(), h.end());

    vector<int> arrows(maxHeight + 1, 0);
    int turns = 0;
    for (int i = 0; i < n; i++)
    {
        int height = h[i];

        if (arrows[height] > 0)
        {
            arrows[height]--;
        }
        else
        {
            turns++;
        }
        arrows[height - 1]++;
    }
    
    cout << turns << endl;

    return 0;
}