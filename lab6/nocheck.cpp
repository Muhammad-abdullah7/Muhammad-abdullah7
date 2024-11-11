#include <iostream>
using namespace std;
bool no_check(int num);
int  main(){
    int num;
    cout<<"Enter the number to check:";
    cin>>num;
    bool res=no_check(num);
    cout<<res<<endl;
}
bool no_check(int num){
    int dig1,dig2,dig3;
    dig1=num%10;
    dig2=num%10;
    dig3=num/10;
    int sum=(dig1+dig2+dig3);
    if(num%2==0&&sum%2==0){
        return 1;
    }if(num%2!=0&&sum%2!=0){
        return 0;
    }
    return 0;
}