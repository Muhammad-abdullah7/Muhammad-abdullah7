#include <iostream>
using namespace std;
int main(){
    double hours;
    const int sec_in_one_hour=3600;
    cout<<"Enter the number of hours: ";
    cin>>hours;
    double tot_time;
    tot_time=hours*sec_in_one_hour;
    cout<<hours<<" is equal to "<<tot_time <<" seconds."<<endl;
    return 0;
}