#include <bits/stdc++.h>
using namespace std;
int main(){

    int testCases;
    cin >> testCases;

    while(testCases--){

    int numberOfAttributes;
    cin >> numberOfAttributes;

    map<string, int> clothingOptions;

    for(int i = 0; i < numberOfAttributes; i++){
        string clothingName, clothingType;
        cin >> clothingName >> clothingType;
        clothingOptions[clothingType]++;
    }

    int minimumPossibleWays = 1;

    //first = category, second = number of options
    for(pair<string, int> clothing : clothingOptions){
        int numberofOptions = clothing.second;
        int numberofWays = numberofOptions + 1; 
        
        minimumPossibleWays *= numberofWays;
    }
    
    minimumPossibleWays -= 1; //subtracting the case where no clothing is chosen
    cout << minimumPossibleWays << endl;
    }
    return 0;
}