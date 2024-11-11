#include <iostream>
using namespace std;
void arith_op(int n,int m);
int main(){
    int num1,num2;
    char ch;
    cout<<"Enter the nnumbers:"<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operator:";
    cin>>ch;
    if(ch=='+'){
    arith_op(num1,num2);
    }
}
void arith_op(int n1,int n2){
    cout<<"The sum of these two numbers is :"<<n1+n2<<endl;
}