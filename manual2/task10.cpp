#include <iostream>
using namespace std;
int main(){
    double voltage,current,power;
    cout<<"Enter the total voltage(in volts): ";
    cin>>voltage;
    cout<<"Enter the total value of current(in ampares): ";
    cin>>current;
    power=voltage*current;
    cout<<voltage <<" and  "<<current <<" are the values of voltage and current respectively."<<endl;
  cout<<"Total power used is "<<power<<" watts."<<endl;
    return 0;
}