#include <iostream>
using namespace std;
bool isgoalScored(char field[7][5]) {
    int goalstart=-1;
    int goalend=-1;
    for (int k=0;k<5;++k) {
        if (field[3][k]=='#') {
            if (goalstart==-1)goalstart=k;
            goalend = k;
        }
    }
    for (int i=0;i<3;++i) {
        for (int j=0;j<5;++j) {
            if (field[i][j]=='0') {
                if (j>goalstart&&j<goalend) {
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    char field1[7][5]={
        {' ', '#', ' ', '#', ' '},
        {' ', '#', ' ', '#', ' '},
        {' ', '#', ' ', '#', ' '},
        {' ', '#', '#', '#', ' '},
        {' ', '0', '#', ' ', ' '},
        {' ', ' ', '#', ' ', ' '},
        {' ', ' ', '#', ' ', ' '}
    };

    char field2[7][5] = {
        {' ', '#', ' ', '#', ' '},
        {' ', '#', ' ', '#', ' '},
        {' ', '#', '0', '#', ' '},
        {' ', '#', '#', '#', ' '},
        {' ', ' ', '#', ' ', ' '},
        {' ', ' ', '#', ' ', ' '},
        {' ', ' ', '#', ' ', ' '}
    };
    cout << boolalpha;
    cout << "Field 1: " << isgoalScored(field1) << endl;
    cout << "Field 2: " << isgoalScored(field2) << endl;
    return 0;
}
