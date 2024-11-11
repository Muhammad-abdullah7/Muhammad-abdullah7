#include <iostream>
using namespace std;
void checksymmetrical(int num) {
    int firstdigit = num / 100;
    int lastdigit = num % 10;
    if (firstdigit == lastdigit) {
        cout << num << " is symmetrical." << endl;
    }
    if (firstdigit != lastdigit) {
        cout << num << " is not symmetrical." << endl;
    }
}
int main() {
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    checksymmetrical(number);
    return 0;
}