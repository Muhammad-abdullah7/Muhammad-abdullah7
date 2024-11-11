#include <iostream>
using namespace std;
void fuelpri(double dis);
int main(){
    double distance,totalprice;
    cout<<"Enter the total distance covered by the vehicle:"<<endl;
    cin>>distance;
    fuelpri(distance);
}
void fuelpri(double dis){
    const double pri_of_fuel=10;
    double total_pri;
    total_pri=pri_of_fuel*dis;
    cout<<"The price of the fuel consumed is: "<<total_pri<<endl;
}