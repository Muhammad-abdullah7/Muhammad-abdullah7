#include <iostream>
using namespace std;
double discount(string day, string month, double amm);
int  main(){
    double amm;
    string day,month;
    cout<<"Enter the ammount to find the discount:";
    cin>>amm;
    cout<<"Enter the month:";
    cin>>month;
    cout<<"Enter the day:";
    cin>>day;
    double res=discount(day,month,amm);
    cout<<"The discount on your ammount is: "<<res<<endl;
}
  double discount(string day, string month, double amm){
      const double disoct=10.0;
      const double dissun=5.0;
      double dis,disamm;
      if((day=="Sunday"||day=="sunday")&& (month=="October"|| month=="october"||month=="March"|| month=="march"|| month=="August"|| month=="august")){
          dis=amm*(disoct/100.0);
          disamm=amm-dis;
          return disamm;
      } else {
          return amm;
      }
          return 0;
  }