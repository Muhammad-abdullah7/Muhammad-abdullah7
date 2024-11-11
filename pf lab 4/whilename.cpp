#include <iostream>
using namespace std;
void name(string name_1);
int main(){
    string name_user;
    while(true){
        cout<<"Enter the name of the user:"<<endl;
        cin>>name_user;
        name(name_user);
    }return 0;
}void name(string name_1){
    cout<<"The name of the user is:"<<name_1<<endl;
}