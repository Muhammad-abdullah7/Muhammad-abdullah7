#include <iostream>
using namespace std;
int digit(int num);
int main() {
    int num;
    cout << "Enter the number to find the number of digits: ";
    cin >> num;
    int res = digit(num);
    cout << "The number of digits in the number " << num << " is " << res << endl;
    return 0;
}int digit(int num) {
    int tot = 0;
    while (num != 0) {
        num = num / 10;
        tot++; 
    }
    return tot;
}
