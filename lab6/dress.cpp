#include <iostream>
using namespace std;
string dress( string brand,double num);
int  main(){
    double amm;
    cout<<"Enter the number to check:";
    cin>>amm;
    string brand;
    cout<<"Enter the brand name:";
    cin>>brand;
    string  res=dress(brand,amm);
    cout<<res<<endl;
}
  string dress(string brand,double amm){
    if(amm<1500){
        if(brand=="MTJ"||brand=="mtj"){
        }return "Congratulations! You can buy the dress.";
    } else {
        return "Sorry! The dress doesn't meet the criteria for purchase.";
    }
      
    return " ";
}