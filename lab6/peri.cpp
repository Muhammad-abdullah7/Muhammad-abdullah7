#include <iostream>
using namespace std;
double perimeter( char ch,double num);
int  main(){
    double num;
    cout<<"Enter the number to check:";
    cin>>num;
    char ch;
    cout<<"ENter the character:";
    cin>>ch;
    double  res=perimeter(ch,num);
    cout<<res<<endl;
}
  double perimeter(char ch,double num){
    const double sq=4;
    const double cir=6.28;
    const double tri=3;
    const double hexa=6;
    if(ch=='s'||ch=='S'){
        return sq*num;
    }
      else if(ch=='c'||ch=='C'){
        return cir*num;
    } 
      else if(ch=='t'||ch=='T'){
        return tri*num;
    }
      else if(ch=='h'||ch=='H'){
        return hexa*num;
    }
    return 0;
}