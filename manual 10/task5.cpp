#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if(n<3||n%3!=0){
        cout<<"Invalid input ! The number of elements should be a multiple of 3."<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Enter the dimensions of the boxes: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tot_vol=0;
    for(int i=0;i<n;i+=3){
        tot_vol+=arr[i]*arr[i+1]*arr[i+2];
    }
    cout<<"Total volume of all the boxes: "<<tot_vol<<endl;
    return 0;
}
