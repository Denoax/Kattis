#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int loop;
    cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        int amountOfPeople;
        cin >> amountOfPeople;

        vector<pair<string, string>> people;

        for (int j = 0; j < amountOfPeople; j++)
        {
            string name, description, garbage;
            cin >> name >> description >> garbage;
            name.pop_back();

            string key;
            for (int k = (int)description.size() - 1; k >= 0; k--)
            {
                if (description[k] == 'u')
                {
                    key += '0';
                }
                else if (description[k] == 'm')
                {
                    key += '1';
                }
                else if (description[k] == 'o')
                {
                    key += '2';
                }
            }

            while (key.size() < 10)
            {
                key += '1';
            }

            people.push_back({key, name});
        }

        sort(people.begin(), people.end());

        for (const pair<string, string>& person : people)
        {
            cout << person.second << '\n';
        }

        cout << "==============================\n";
    }
    
    
    return 0;
}
