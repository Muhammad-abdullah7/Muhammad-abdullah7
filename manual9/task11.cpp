#include <iostream>
using namespace std;

void print_reverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    print_reverse(arr, n);
    return 0;
}
