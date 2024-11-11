#include <iostream>
using namespace std;
string returnval(int num);
int main(){
    int num1;
    string ans;
    cout<<"Enter the number:";
    cin>>num1;
    if(num1>99999|| num1<=0){
        cout<<"This number is not within the range."<<endl;
    }if(num1<=99999&&num1>=1){
        cout<<"Number is valid."<<endl;
        ans=returnval(num1);
        cout<<"The number provided is: "<<ans<<endl;
    }
    
    return 0;

}
string returnval(int num){
    int dig1,dig2,dig3,dig4,dig5;
    dig1=num/10;
    dig2=num/10;
    dig3=num/10;
    dig4=num/10;
    dig5=num%10;
    int sum=dig1+dig2+dig3+dig4+dig5;
    if(sum%2==0){
         return "Evenish.";

    }if(sum%2!=0){
      return "Oddish";
    }
}