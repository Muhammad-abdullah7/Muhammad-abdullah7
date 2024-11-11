#include <iostream>
using namespace std;
bool canpaywithchange(double change[],double totaldue){
    double total=change[0]*0.25+change[1]*0.10+change[2]*0.05+change[3]*0.01;

    if (total >= totaldue) {
        return true;
    } else {
        return false;
    }
}
int main() {
    double change1[]={25, 20, 5, 0};
    double totaldue1=4.25;
    if (canpaywithchange(change1,totaldue1)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    double change2[]={2, 100, 0, 0};
    double totaldue2=14.11;
    if(canpaywithchange(change2, totaldue2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    double change3[]={0, 0, 20, 5};
    double totaldue3=0.75;
    if(canpaywithchange(change3, totaldue3)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    double change4[]={30, 40, 20, 5};
    double totaldue4=12.55;
    if(canpaywithchange(change4, totaldue4)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    double change5[]={10, 0, 0, 50};
    double totaldue5=3.85;
    if(canpaywithchange(change5, totaldue5)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    double change6[]={1, 0, 5, 219};
    double totaldue6=19.99;
    if(canpaywithchange(change6, totaldue6)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
