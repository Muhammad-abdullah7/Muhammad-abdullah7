#include <iostream>
using namespace std;
string speed(double speed1);
int  main(){
    double speed1;
    cout<<"Enter the speed of the vehicle"<<endl;
    cin>>speed1;
      string res=speed(speed1);
    cout<<res<<endl;
}
 string speed(double speed1){
      if(speed1<=10){
          return "Slow";
      }
      if(speed1>10&& speed1<=50){
          return "Average.";
      }if(speed1>50&& speed1<=150){
          return "Fast";
      }if(speed1>150&& speed1<=1000){
          return "ultra-fast";
      }if(speed1>1000){
          return "Extremely-fast";
      }
         return " ";
  }