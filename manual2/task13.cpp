#include <iostream>
using namespace std;
<<<<<<< HEAD
main(){
system("color 03");
cout<<"+--^----------,--------,-----,--------^-,    "<<endl;
cout<<" | |||||||||   '--------'      |         o   "<<endl;
cout<<" '+----------------------------^---------|   "<<endl;   
cout<<"   ',--------,---------,---------------'     "<<endl;
cout<<"     / XXXXXX /'|      /'                    "<<endl;
cout<<"    / XXXXXX /  |     /'                     "<<endl;
cout<<"   / XXXXXX /'-------'                       "<<endl;
cout<<"  / XXXXXX /                                 "<<endl;
cout<<" / XXXXXX /                                  "<<endl;
cout<<"(--------(                                   "<<endl;
cout<<" '------'                                    "<<endl;
=======
int main(){
    int population,n,tot_population;
    cout<<"Enter the current population: ";
    cin>>population;
    cout<<"Enter the no of children being given birth every month: ";
    cin>>n;
   tot_population=population+(n*12*10*3);
   cout<<"Total number of people present when the spacecraft willbe completed are: "<<tot_population<<endl;
    return 0;
    
>>>>>>> 53460ef (Initial commit)
}