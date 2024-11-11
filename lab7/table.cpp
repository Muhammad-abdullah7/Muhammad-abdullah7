#include <iostream>
using namespace std;
void  table(int num);
int main(){
    int num;
    cout<<"Enter the number to make a table:";
    cin>>num;
    table(num);
}
void  table(int num){
    for(int i=1;i<=10;i++){
     cout<<num<<" * "<< i <<" = "<<num*i<<endl;
    }
}