#include <iostream>
using namespace std;
string grades( double marks);
int  main(){
    double marks;
    cout<<"Enter the  numbers to find your grades:";
    cin>>marks;
    string res=grades(marks);
    cout<<res<<endl;
}
  string grades(double marks){
      if(marks>85){
          return "Student has passed the subject Grade: A";
      } if(marks>=81&&marks<=85){
          return "Student has passed the subject Grade: B";
      } if(marks>=71&& marks<=80){
          return "Student has passed the subject Grade: C";
      } if(marks>=61&& marks<=70){
          return "Student has passed the subject Grade: D";
      } if(marks>=50&& marks<=60){
          return "Student has passed the subject Grade: E";
      } if(marks<50){
          return "Student has passed the subject Grade: F";
      }
    
    return " ";
}