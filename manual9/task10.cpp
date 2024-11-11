#include <iostream>
using namespace std;

string shift_letters(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'z') {
            str[i] = 'a';
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        } else {
            str[i] = str[i] + 1;
        }
    }
    return str;
}

int main() {
    string input;
    cin >> input;
    cout << shift_letters(input) << endl;
    return 0;
}
