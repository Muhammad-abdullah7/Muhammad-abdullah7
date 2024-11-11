#include <iostream>
using namespace std;
void sum();
int main()
{
   sum();
return 0;

}
void sum(){


int num1,num2,sum;
cout<<"Enter the number 1:";
cin>>num1;
cout<<"Enter the number 2:";
cin>>num2;
sum=num1+num2;
cout<<"The sum of the two numbers is: "<<sum<<endl;
}