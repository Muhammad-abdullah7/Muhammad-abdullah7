#include <iostream>
using namespace std;
void result(int num);
int main(){
    int num_1;
    cout<<"Enter the number to find whether it's even or odd:"<<endl;
    cin>>num_1;
    result(num_1);
}
void result(int num){
    if(num%2==0){
        cout<<"No is even."<<endl;
    }
    if(num%2!=0){
        cout<<"No is odd."<<endl;
    }
}