#include <iostream>
using namespace std;
int frequency (int num,int n);
int main(){
    int num,n;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter the number:";
    cin>>n;
    int res=frequency(num,n);
    cout<<"The number that you have entered has frequancy of "<< res<<" times."<<endl;
}
int frequency(int num,int n){
    int tot=0;
    while(num!=0){
        if(num%10==n){
         tot++;
        }
        num=num/10;
    }return tot;
}