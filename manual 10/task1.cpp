#include <iostream>
using namespace std;
int days(int arr[],int n);
int main() {
    int arr1[]={3,4,1,2};
    int arr2[]={10,11,12,9,10};
    int arr3[]={6,5,4,3,2,9};
    int arr4[]={9,9};
    cout<<days(arr1,4)<<endl;
    cout<<days(arr2,5)<<endl; 
    cout<<days(arr3,6)<<endl; 
    cout<<days(arr4,2)<<endl; 
    return 0;
}
int days(int arr[],int n){
    int flag=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            flag++;
        }
    }
    return flag;
}
