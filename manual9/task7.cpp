#include <iostream>
using namespace std;

bool ch_hunt(char ch, string word);

int main() {
    char ch;
    string word;
    cout << "Enter the letter: ";
    cin >> ch;
    cout << "Enter the word: ";
    cin >> word;
    
    if (ch_hunt(ch, word)) {
        cout << ch << " is found in the word " << word << endl;
    } else {
        cout << ch << " is not found in the word " << word << endl;
    }
}

bool ch_hunt(char ch, string word) {
    bool isfound = false;
    for (int i = 0; i < word.length(); i++) {
        if (ch == word[i]) {
            isfound = true;
            break; 
        }
    }
    return isfound;
}
