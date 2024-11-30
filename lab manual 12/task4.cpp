#include <iostream>
#include <string>
using namespace std;
string fire(string coord) {
    char grid[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}
    };
    int row=coord[1]-'1';
    int col=coord[0]-'a';
    if (row<0||row>=5||col<0||col>=5) {
        return "invalid coordinate";
    }
    if (grid[row][col]=='*') {
        return "BOOM";
    } else {
        return"SPLASH";
    }
}
int main() {
    string coord;
    cout<<"Enter coordinate to fire torpedo (e.g., a1, b3, e5): ";
    cin>>coord;
    cout<<"Result: " <<fire(coord)<<endl;
    return 0;
}

