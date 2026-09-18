#include <bits/stdc++.h>

using namespace std;

int main(){

    int testCases;
    cin >> testCases;

    while (testCases--) {

        int n, m;
        cin >> n >> m;

        vector<vector<int>> prizes(n);
        vector<int> prizeValue(n);

        for (int i = 0; i < n; i++) {

            int amountNeeded;
            cin >> amountNeeded;

            for (int j = 0; j < amountNeeded; j++) {
                int sticker;
                cin >> sticker;
                prizes[i].push_back(sticker);
            }
            cin >> prizeValue[i];
        }

        vector<int> stickers(m);

        for (int i = 0; i < m; i++) {
            cin >> stickers[i];
        }

        int totalMoney = 0;
        for (int i = 0; i < n; i++) {

            int firstSticker = prizes[i][0] - 1;
            int smallest = stickers[firstSticker];

            for (size_t j = 1; j < prizes[i].size(); j++) {
                int sticker = prizes[i][j] - 1;
                if (stickers[sticker] < smallest) {
                    smallest = stickers[sticker];
                }

            }
            totalMoney += smallest * prizeValue[i];
        }
        cout << totalMoney << endl;
    }

return 0;
}
