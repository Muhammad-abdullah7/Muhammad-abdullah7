#include <iostream>
using namespace std;
void stickers(int n);
int main(){
     int length;
     cout<<"Enter the length of the cube:"<<endl;
     cin>>length;
     stickers(length);
     
}
void stickers(int n){
    if(n!=0 &&n>=1){
        cout<<"The total number of stickers to cover the whole cube is   "<<(n*n)*6<<endl;
    } if(n==0|| n<=1){
        cout<<"The number is invalid! Enter a valid number."<<endl;
    } 
}