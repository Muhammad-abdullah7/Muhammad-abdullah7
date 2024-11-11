#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name:";
    cin>>name;
    int marks_1,marks_2,ecat_marks;
    const float mark_1=1100.0,mark_2=1100.0,ecat_mark=400.0;
    cout<<"Enter the marks obtained in matric (out of 1100):";
    cin>>marks_1;
    cout<<"Enter the marks obtained in fsc. (out of 1100):";
    cin>>marks_2;
    cout<<"Enter the marks obtained in ECAT (out of 400):";
    cin>>ecat_marks;
    float aggregate;
    aggregate=((marks_1/mark_1)*10.0)+((marks_2/mark_2)*40.0)+((ecat_marks/ecat_mark)*50.0);
    cout<<"Your aggregate for admission in UET is: "<<aggregate<<" %."<<endl;
    return 0;
    
}