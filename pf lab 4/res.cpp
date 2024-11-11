#include <iostream>
using namespace std;
void result(int marks);
int main(){
    int marks_1;
    cout<<"Enter the marks of the student:"<<endl;
    cin>>marks_1;
    result(marks_1);
}
void result(int marks){
    if(marks>=50){
        cout<<"Pass."<<endl;
    }
    if(marks<50){
        cout<<"Fail."<<endl;
    }
}