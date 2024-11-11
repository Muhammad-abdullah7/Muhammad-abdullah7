#include <iostream>
using namespace std;
void checkeq(int num1,int num2);
int main(){
    int n1,n2;
    checkeq(n1,n2);
} void checkeq(int num1,num2){
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    if(num1==num2){
        cout<<"True."<<endl;
    }if(num1!=num2){
        cout<<"False."<<endl;
    }
}