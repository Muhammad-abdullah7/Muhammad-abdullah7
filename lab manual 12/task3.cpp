#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];
    bool isidentity=true;
    cout<<"Enter the elements of the 3x3 matrix with indices:"<<endl;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            cout<<"Matrix[" << i << "][" << j << "]: ";
            cin>>matrix[i][j];
            if ((i==j&&matrix[i][j]!=1)||(i!=j&&matrix[i][j]!=0)) {
                isidentity = false;
            }
        }
    }
    if (isidentity) {
        cout<<"The matrix is an identity matrix."<<endl;
    } else {
        cout<<"The matrix is not an identity matrix."<<endl;
    }
    return 0;
}
