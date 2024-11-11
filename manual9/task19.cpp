#include <iostream>
using namespace std;
bool isspecialarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {  
            if (arr[i] % 2 != 0) {  
                return false;  
            }
        } else {  
            if (arr[i] % 2 == 0) {  
                return false;  
            }
        }
    }
    return true; 
}
int main() {
    int arr1[] = {2, 7, 4, 9, 6, 1, 6, 3};
    bool result1 = isspecialarray(arr1, 8);
    if (result1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    int arr2[] = {2, 7, 9, 1, 6, 1, 6, 3};
    bool res2 = isspecialarray(arr2, 8);
    if (res2) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    int arr3[] = {2, 7, 8, 8, 6, 1, 6, 3};
    bool res3 = isspecialarray(arr3, 8);
    if (res3) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
