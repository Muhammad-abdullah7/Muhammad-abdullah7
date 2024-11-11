#include <iostream>
using namespace std;
int main(){
    int mbs;
    cout<<"Enter the no of megabytes you want to convert into bytes: ";
    cin>>mbs;
    const int kbs=1024;
    const int bits=8;
    int total_bits=mbs*kbs*bits;
    cout<<mbs<<" mbs are equal to "<<total_bits<<" bits."<<endl;
    return 0;
}