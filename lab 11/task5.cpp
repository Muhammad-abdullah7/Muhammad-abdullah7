#include <iostream>
using namespace std;
void swapingwithpointers(int* a, int* b);
void swapingwithreferences(int& a, int& b);
void reversalofarray(int* arr, int size);
int main() {
    int x=10,y=20;
    cout<<"Before swap using pointers: x = "<<x<<", y = "<<y<<endl;
    swapingwithpointers(&x,&y);
    cout<<"Swapping after using pointers: x = "<<x<<", y = "<<y<<endl;
    cout<<"Swaping after using references: x = "<<x<<", y = "<<y<<endl;
    swapingwithreferences(x, y);
    cout<<"After swap using references: x = "<<x<<", y = "<<y<<endl;
    int size=5;
    int* array=new int[size]{1,2,3,4,5};
    cout<<"Original array: ";
    for (int i=0;i<size;i++)
    cout<<array[i]<<" ";
    cout<<endl;
    reversalofarray(array,size);
    cout<<"Reversed array: ";
    for(int i=0;i<size;i++)
     cout<<array[i]<<" ";
    cout<<endl;
    delete[] array;
    return 0;
}
void swapingwithpointers(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swapingwithreferences(int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
}
void reversalofarray(int* arr, int size) {
    int* start=arr;
    int* end=arr+size-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
