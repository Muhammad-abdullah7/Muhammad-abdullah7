#include <iostream>
using namespace std;
int myfunc(int num);
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int res=myfunc(n);
    cout<<"The result of multiplication with 5 is "<<res<<endl;
    
    
} int myfunc(int num){
    int mul=num*5;
    return mul;
}
