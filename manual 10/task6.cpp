int main() {
    int packages[10]={120,45,78,23,56,89,34,67,101,243};
    int n=sizeof(packages)/sizeof(packages[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++) {
            if(packages[j]>packages[j+1]){
                int temp=packages[j];
                packages[j]=packages[j+1];
                packages[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<packages[i];
        if(i<n-1)cout<<", ";
    }
    cout<<endl;
    return 0;
}
