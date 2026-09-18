#include <bits/stdc++.h>

using namespace std;

int main(){

    string art = "";
    char material = ' ';

    int frameThickness = 0;
    int gap = 0;

    cin >> art >> material >> frameThickness >> gap;

    if(frameThickness == 0){

        cout << art << endl;

        return 0;
    }

    int frameWidth = art.size() + (gap * 2) + (frameThickness * 2);
    int frameHeight = 1 + (gap * 2) + (frameThickness * 2);

    for(int row=0; row<frameHeight; row++){

        for(int col=0; col<frameWidth; col++){

            if(row < frameThickness || row >= frameHeight - frameThickness ||
               col < frameThickness || col >= frameWidth - frameThickness){

                cout << material;

            }
            else if(row == frameThickness + gap &&
                    col >= frameThickness + gap &&
                    col < frameThickness + gap + static_cast<int>(art.size())){

                cout << art[col - frameThickness - gap];

            }
            else{

                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
