#include <bits/stdc++.h>
using namespace std;

string swapByteOrder(const string& value) {
    string prefix = value.substr(0, 2);

    int charsPerByte;

    if (prefix == "0b") {
        charsPerByte = 8;
    }
    else {
        charsPerByte = 2;
    }

    vector<string> bytes;

    for (size_t i = 2; i < value.size(); i += charsPerByte) {
        bytes.push_back(value.substr(i, charsPerByte));
    }

    reverse(bytes.begin(), bytes.end());

    string result = prefix;

    for (string byte : bytes) {
        result += byte;
    }

    return result;
}

int main() {

    char startEndian, endEndian;
    int n;

    cin >> startEndian >> endEndian >> n;

    string value;
    cin >> value;

    if (startEndian != endEndian) {
        value = swapByteOrder(value);
    }

    cout << value << endl;

    return 0;
}
