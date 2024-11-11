#include <iostream>
using namespace std;
string result(int marks);
int main(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    string res=result(marks);
    cout<<res<<endl;
}
string result(int marks){
    if(marks>50){
        return "You are pass with "+to_string(marks)+" marks";
    }
    if(marks<=50){
        return "You are failed with "+to_string(marks)+" marks";
    }return " ";
}