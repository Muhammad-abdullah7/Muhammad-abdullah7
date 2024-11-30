#include <iostream>
using namespace std;
void printsum(int matrix[][3], int rowsize) {
    int sum=0;
    for (int i=0;i<rowsize;i++) {
        for (int j=0;j<3;j++) {
            sum+=matrix[i][j];
        }
    }
    cout<<"The sum of the elements in the matrix is: "<<sum<<endl;
}
int main() {
    int rowsize;
    cout << "Enter the number of rows for the matrix: ";
    cin >> rowsize;
    int matrix[rowsize][3];
    cout << "Enter the elements of the matrix (" << rowsize << " x 3):\n";
    for(int i=0;i<rowsize;i++) {
        for (int j=0;j<3;j++) {
            cin>>matrix[i][j];
        }
    }
    printsum(matrix, rowsize);
    return 0;
}
