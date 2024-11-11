#include <iostream>
using namespace std;
void addnum(int,int);
int main(){
    int n1,n2;
    cout<<"Enter the numbers:"<<endl;
    cin>>n1>>n2;
    addnum(n1,n2);
    
}
void addnum(int num1, int num2){
    cout<<"The sum of these two numbers is :"<<num1+num2<<endl;
}