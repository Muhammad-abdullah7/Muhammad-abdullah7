#include <iostream>
using namespace std;
int fibonacci(int n);
int main() {
    int length;
    cout << "Enter the length of fibonacci series: ";
    cin >>length;
    for (int i = 0; i <length; i++)
     cout << fibonacci(i) << " ";
    return 0;
}int fibonacci(int num) {
    if (num<= 1){
        return num;
    } else {
    return fibonacci(num-1) + fibonacci(num-2);
}return 0;
}
