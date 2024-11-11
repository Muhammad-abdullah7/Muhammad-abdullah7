#include <iostream>
using namespace std;
bool aresame(double n1, double n2,double n3);
int  main(){
    double n1,n2,n3;
    cout<<"Enter the first numbers:"<<endl;
    cin>>n1;
    cout<<"Enter the second numbers:"<<endl;
    cin>>n2;
    cout<<"Enter the third numbers:"<<endl;
    cin>>n3;
      bool res=aresame(n1,n2,n3);
    cout<<res<<endl;
}
  bool aresame(double n1,double n2,double n3){
      
      if((n1==n2)&&(n2==n3)&&(n1==n3)){
          return 1;
      } else {
          return 0;
      }
         
  }