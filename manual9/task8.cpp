#include <iostream>
using namespace std;
void indexno(string word);
int main() {
    string word;
    cout << "Enter the word: ";
    cin >> word;
    indexno(word);
    return 0;
} 
void indexno(string word){
     for (int i = 0; i < word.length(); i++) {
        cout<<word[i]<<" is located at "<< i<<endl;
    }
}