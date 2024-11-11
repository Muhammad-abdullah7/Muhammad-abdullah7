#include <iostream>
using namespace std;
int gcd(int num1,int num2) {
    while (num2!=0) {
        int rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    return num1;
}
int lcm(int num1,int num2,int gcd) {
    return (num1*num2)/gcd;
}
int main() {
    int num1,num2;
    cout<<"Enter two positive integers: ";
    cin>>num1>>num2;
    int gcd1=gcd(num1,num2);
    int lcm1=lcm(num1,num2,gcd1);
    cout << "GCD is " << num1 << " and " << num2 << " is: " << gcd1 << endl;
    cout << "LCM is " << num1 << " and " << num2 << " is: " << lcm1 << endl;
    return 0;
}
