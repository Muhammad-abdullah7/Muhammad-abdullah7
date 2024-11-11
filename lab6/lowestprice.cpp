#include <iostream>
using namespace std;
double price(string time , double dis);
int main(){
    string time;
    double dis;
    cout<<"Enter the time of the day:";
    cin>>time;
    cout<<"Enter the distance you want to travel:";
    cin>>dis;
    double res=price(time,dis);
    cout<<"You will have to pay "<<res<<" EUR."<<endl;
    system("pause");
    return 0;
}
double price(string time , double dis){
    const double startrate=0.70;
    if(dis==20){
        if(time=="day"|| time=="Day"||time=="night"|| time =="Night"){
            return 0.09*dis;
        }
    }
    else if(dis==100){
        if(time=="day"|| time=="Day"||time=="night"|| time =="Night")
        return 0.06*dis;
    }
    else{
        if(time=="day"|| time=="Day"){
           return (0.79*dis)+startrate;
        }
         if(time=="night"|| time=="Night"){
           return (0.90*dis)+startrate;
        }
    } return 0;
    
}
