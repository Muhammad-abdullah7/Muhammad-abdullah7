#include <iostream>
using namespace std;
string ret_val(double num1, double num2);
int main(){
    double n1,n2;
    cout<<"Enter the number 1:";
    cin>>n1;
     cout<<"Enter the number 2:";
    cin>>n2;
    string res=ret_val(n1,n2);
    cout<<res<<endl;
}
string ret_val(double num1, double num2){
    if(num1>num2){
        return "True";
    }if(num2>num1){
        return "False";
    }return " ";
}