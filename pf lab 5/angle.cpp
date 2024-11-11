#include <iostream>
#include <cmath>
using namespace std;
int main(){
   double angle , dis;
   cout<<"Enter the value of angle in degrees:";
   cin>>angle;
    cout<<"Enter the value of distance in meters:";
   cin>>dis;
   double ang_in_rad=angle*(1/57.3);
   cout<<"The angle is: "<<dis*tan(ang_in_rad)<<endl;
   
} 