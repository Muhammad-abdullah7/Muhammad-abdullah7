#include <iostream>
using namespace std;
void modificationviapointer(int* ptr);
void modificationviareference(int& ref);
int main() {
    int a=20,b=30;
    modificationviapointer(&a);
    modificationviareference(b);
    cout<<"Value of a after using pointer: "<<a<<endl;
    cout<<"Value of b after using reference: "<<b<<endl;
    return 0;
}
void modificationviapointer(int* ptr){
    *ptr += 10;
}
void modificationviareference(int& ref) {
    ref += 10;
}
