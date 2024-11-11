#include <iostream> 
using namespace std;
int sum (int num);
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int res=sum(num);
    cout<<"The sum of the digits of the number you have entered is  "<< res<<endl;
}
int sum(int num){
    int dig=0;
    int tot=0;
    while(num!=0){
      dig=num%10;
      tot=tot+dig;
      num=num/10;
    }
    return tot;
}
    
    
    