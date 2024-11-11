#include <iostream>
using namespace std;
void arith_op(double n1, double n2);
int main(){
    double num1,num2;
    char op;
   while(true){
       
   cout<<"Enter the numbers:"<<endl;
    cin>>num1>>num2;
    arith_op(num1,num2);
}
    
}

void arith_op(double n1, double n2){
    char ch;
    cout<<"Enter the operator:"<<endl;
    cin>>ch;
    if(ch=='+'){
        cout<<"The sum is:"<<n1+n2<<endl;
    } if(ch=='-'){
        cout<<"The difference is:"<<n1-n2<<endl;
    } if(ch=='*'){
        cout<<"The product is:"<<n1*n2<<endl;
    } if(ch=='/'){
        cout<<"The division is:"<<n1/n2<<endl;
    }
}