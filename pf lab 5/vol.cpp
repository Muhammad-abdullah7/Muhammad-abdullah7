#include <iostream>
using namespace std;
string calculatePoolState(int V, int P1, int P2, float H) {
    float totalwater=(P1*H)+(P2*H);
    if (totalwater<=V) {
        int percentfull=(totalwater/V) * 100;
        int percentpipe1=(P1*H/totalwater) * 100;
        int percentpipe2=(P2*H/totalwater) * 100;
        return "The pool is " + to_string(percentfull) + "% full. Pipe 1: "+to_string(percentpipe1)+"%. Pipe 2: "+ to_string(percentpipe2) + "%.";
    } 
    if(totalwater>=V) {
        float overflow=totalwater-V;
        return "For "+to_string(H)+" hours the pool overflows with " + to_string(overflow)+"liters.";
    }return " ";
}
int main() {
    int v, p1, p2;
    float h;
    cout<<"Enter the volume of the pool : ";
    cin>>v;
    cout<<"Enter the flow rate of Pipe 1 : ";
    cin>> p1;
    cout<<"Enter the flow rate of Pipe 2 : ";
    cin>>p2;
    cout<<"Enter the number of hours : ";
    cin>>h;
    string res=calculatePoolState(v,p1,p2,h);
    cout<<res<<endl;
    return 0;
}

