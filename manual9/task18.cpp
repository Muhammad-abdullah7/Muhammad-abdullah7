#include <iostream>
#include <string>
using namespace std;
int main() {
    string input, result = "";
    cout << "enter a string: ";
    cin.ignore();
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}
