#include <iostream>
using namespace std;
double findGreatest( double n1,double n2, double n3);
int  main(){
    double num1,num2,num3;
    cout<<"Enter the numbers to find the greatest:";
    cin>>num1>>num2>>num3;
    double  res=findGreatest(num1,num2,num3);
    cout<< " The greatest number among " << num1 <<" "<<num2<<" "<<num3<<" is:  "<< res <<endl;
}
  double findGreatest(double n1,double n2, double n3){
    if((n1>n2)&&(n2>n3)){
        return n1;
    }if((n2>n1)&&(n2>n3)){
        return n2;
    }if((n3>n1)&&(n3>n2)){
        return n3;
    }
    return 0;
}