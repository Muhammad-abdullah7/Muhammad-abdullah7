#include <iostream>
using namespace std;
void result(double amm,string day);
int main(){
    double amm_1;
    string day_1;
    cout<<"Enter the ammount to find the discount:"<<endl;
    cin>>amm_1;
    cout<<"Enter the day to find it's discount day or not:"<<endl;
    cin>>day_1;
    result(amm_1,day_1);
}
void result(double amm,string day){
    const double dis=10;
     double pri_after_dis,net_pri;
    if(day=="Sunday"){
        pri_after_dis=amm*(dis/100.0);
        net_pri=amm-pri_after_dis;
        cout<<"The price after discount on Sunday is:"<<net_pri<<endl;
    }
    if(day!="Sunday"){
        cout<<"No discount! Your payable ammount is:"<<amm<<endl;
    }
}