#include <iostream>
using namespace std;
string title(int age, char gender);
int  main(){
    int age;
    char gen;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your age:";
    cin>>gen;
   string res;
     res=title(age,gen);
    cout<<"Your title is : "<<res<<endl;
}
  string title(int age, char gender){
      
      if(age>=16&& gender=='m'){
          return "Mr.";
      } if(age<16&& gender=='m'){
          return "Master.";
      } if(age>=16&& gender=='f'){
          return "Ms.";
      } if(age<16&& gender=='f'){
          return "Miss.";
      }
          return " ";
  }