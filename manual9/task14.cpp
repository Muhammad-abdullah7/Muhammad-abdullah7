#include <iostream>
using namespace std;

double caltotresis(double resis[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += resis[i];
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    double resis[n];

    for (int i = 0; i < n; i++) {
        cin >> resis[i];
    }

    cout << caltotresis(resis, n) << endl;

    return 0;
}
