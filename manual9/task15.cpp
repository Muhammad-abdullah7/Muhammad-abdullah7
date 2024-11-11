#include <iostream>
using namespace std;
void insertarrays(int arr1[], int arr2[], int size1, int size2) {
    int result[size1 + size2];
    result[0] = arr1[0];
    for (int i = 0; i < size2; i++) {
        result[i + 1] = arr2[i];
    }
    result[size1] = arr1[1];

    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr1[] = {1, 10};
    int arr2[] = {2, 3, 4, 5, 6, 7, 8, 9};
    insertarrays(arr1, arr2, 2, 8);
    int arr3[] = {15, 150};
    int arr4[] = {45, 75, 35};
    insertarrays(arr3, arr4, 2, 3);
    return 0;
}
