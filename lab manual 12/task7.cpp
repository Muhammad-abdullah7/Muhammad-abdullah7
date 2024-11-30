#include <iostream>
using namespace std;
void largestcolumnfirst(int m[5][5], int row_size) {
    int maximumsum=0,maxcolumn=0;
    for(int j=0;j<5;++j){
        int columnsum=0;
        for(int i=0;i<row_size;++i)columnsum+=m[i][j];
        if(columnsum>maximumsum)maximumsum=columnsum,maxcolumn =j;
    }
    for(int i=0;i<row_size;++i)swap(m[i][0],m[i][maxcolumn]);
}
int main() {
    int rowsize;
    cout<<"Enter rows(1-5): ";
    cin>>rowsize;
    if(rowsize<1||rowsize>5)
    return 1;
    int m[5][5];
    for(int i=0;i<rowsize;++i)
        for(int j=0;j<5;++j) 
        cin>>m[i][j];
    largestcolumnfirst(m,rowsize);
    for(int i=0;i<rowsize;++i,cout<<endl)
        for(int j=0;j<5;++j)cout<<m[i][j]<<' ';
    return 0;
}
