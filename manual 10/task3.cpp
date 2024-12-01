#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"How many Elements you want to Enter: ";
    cin>>n;
    if(n<3){
        cout<<"No Peak found !"<<endl;
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int peakcount=0;
    int peaks[n];
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            peaks[peakcount++]=arr[i];
        }
    }
    if(peakcount==0){
        cout<<"No Peak found"<<endl;
    }else{
        cout<<"Peaks: [";
        for(int i=0;i<peakcount;i++){
            cout<<peaks[i];
            if(i<peakcount-1)cout<<", ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}
