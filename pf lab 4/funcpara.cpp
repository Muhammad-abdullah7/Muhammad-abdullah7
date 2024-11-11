#include <iostream>
using namespace std;
void sumpr(int n1,int n2);
int main(){
    int x,y;
    cout<<"Enter the numbers to find their sum:"<<endl;
    cin>>x>>y;
    sumpr(x,y);
}
void sumpr(int n1,int n2){
    int sum;
    sum=n1+n2;
    cout<<sum<<endl;
}