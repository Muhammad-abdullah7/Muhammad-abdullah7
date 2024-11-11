#include <iostream>
using namespace std;
void add(double n1 ,double n2);
void mul(double n1 ,double n2);
void sub(double n1 ,double n2);
void divi(double n1 ,double n2);
int main(){
   double num1,num2;
   char op;
   cout<<"Enter the two numbers:"<<endl;
   cin>>num1>>num2;
cout<<"Enter the operator:"<<endl;
cin>>op;
   if (op=='+'){
  add(num1,num2);
}if (op=='-'){
  sub(num1,num2);
}if (op=='*'){
  mul(num1,num2);
}if (op=='/'){
  divi(num1,num2);
}
return 0;




}
void add(double n1 ,double n2){
   cout<<"The sum of these numbers is:"<<n1+n2<<endl;
}void mul(double n1 ,double n2){
   cout<<"The product of these numbers is:"<<n1*n2<<endl;
}void sub(double n1 ,double n2){
   cout<<"The difference of these numbers is:"<<n1-n2<<endl;
}void divi(double n1 ,double n2){
   cout<<"The division of these numbers is:"<<n1/n2<<endl;
}