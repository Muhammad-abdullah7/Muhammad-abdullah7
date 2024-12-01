#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    char letter;
    cout<<"Enter how many words you want to enter: ";
    cin>>n;
    string words[n];
    for(int i=0;i<n;i++){
        cout<<"Enter word "<<i+1<< ": ";
        cin>>words[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
    int count=0;
    for(int i=0;i<n;i++){
        for(char c:words[i]){
            if(c==letter){
                count++;
            }
        }
    }
    cout << letter << " has appeared " << count << " times in the data." << endl;
    return 0;
}