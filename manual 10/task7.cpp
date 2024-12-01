#include <iostream>
#include <string>
using namespace std;
string reversalofwords(string str) {
    int start=0,end=0,length=str.length();
    string result="";
    while(end<=length){
        if(end==length||str[end]==' '){
            string word=str.substr(start,end-start);
            if(!result.empty()){
                result=word+" "+result;
            } else {
                result=word;
            }
            start=end+1;
        }
        end++;
    }
    return result;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin,input);
    cout << reversalofwords(input) << endl;
    return 0;
}
