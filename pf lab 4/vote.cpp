#include <iostream>
using namespace std;
void vote(int age);
int main(){
    int age_1;
    cout<<"Enter the age of the person:"<<endl;
    cin>>age_1;
    vote(age_1);
}
void vote(int age){
    if(age>=18){
        cout<<"This person is eligible for vote."<<endl;
    }
    if(age<=18){
        cout<<"This person is  not eligible for vote."<<endl;
    }
}