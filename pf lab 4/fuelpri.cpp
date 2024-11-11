#include <iostream>
using namespace std;
void result(double fuelamm);
int main(){
    double fuel_amm,min_amm;
    cout<<"Enter the ammount of the fuel in (litres):"<<endl;
    cin>>fuel_amm;
    
    result(fuel_amm);
}
void result(double fuelamm){
    double min_amm;
const double fuel=100;
    cout<<"Enter the  minimum fuel condition:";
    cin>>min_amm;
    if(min_amm>=100){
        const int times_per_dis=10;
        cout<<"The ammount of fuel needed is :"<<times_per_dis*fuelamm<<endl;
    }
    if(min_amm<100){
       cout<<"The ammount of fuel needed is :"<<fuel<<" litres."<<endl;
    }
}