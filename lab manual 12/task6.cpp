#include <iostream>
using namespace std;
void largestcolumnfirst(int m[5][5]);
int main() {
    int m[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {6, 7, 8, 9, 10},
        {10, 9, 8, 7, 6},
        {2, 3, 4, 5, 6}
    };
    largestcolumnfirst(m);

    for(int i=0;i<5;++i) {
        for (int j=0;j<5;++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
void largestcolumnfirst(int m[5][5]) {
    int maxsum=0;
    int maxcol=0;
    for (int j=0;j<5;++j) {
        int colsum=0;
        for (int i=0;i<5;++i) {
            colsum+=m[i][j];
        }
        if (colsum>maxsum) {
            maxsum=colsum;
            maxcol=j;
        }
    }
    for (int i=0;i<5;++i) {
        int temp=m[i][0];
        m[i][0]=m[i][maxcol];
        m[i][maxcol]=temp;
    }
}
