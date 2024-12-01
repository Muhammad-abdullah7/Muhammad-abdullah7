#include <iostream>
using namespace std;
const int maxsize=100;
int arr[maxsize];
bool iscyclerep(int lenght){
    int n=sizeof(arr)/sizeof(arr[0]);
    if(lenght>n)
            return true;
    for(int i=0;i<lenght;i++){
        for(int j=i;j<n;j+=lenght){
            if(arr[i]!=arr[j]) 
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lenght;
    cout<<"Enter the length of the cycle : ";
    cin>>lenght;
    if(iscyclerep(lenght)){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}
