#include <iostream>
using namespace std;
void inch_con(double inches);
int main(){
    double inch,ans_infeet;
    cout<<"Enter the value in incehs:"<<endl;
    cin>>inch;
    inch_con(inch);
    return 0;
    
}
void inch_con(double inches){
    const double inch_per_feet=12;
    double ans_in_feet;
    ans_in_feet=inches/inch_per_feet;
    cout<<"The given inches are "<< inches <<" and their conversion to feet is "<<ans_in_feet<<endl;
}