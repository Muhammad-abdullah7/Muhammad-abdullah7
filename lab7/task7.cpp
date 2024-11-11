#include <iostream>
using namespace std;

int main() {
    int n, x, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 200) p1++;
        else if (x < 400) p2++;
        else if (x < 600) p3++;
        else if (x < 800) p4++;
        else p5++;
    }
    cout << (int)((p1 * 10000.0 / n) + 0.5) / 100.0 << "%" << endl;
    cout << (int)((p2 * 10000.0 / n) + 0.5) / 100.0 << "%" << endl;
    cout << (int)((p3 * 10000.0 / n) + 0.5) / 100.0 << "%" << endl;
    cout << (int)((p4 * 10000.0 / n) + 0.5) / 100.0 << "%" << endl;
    cout << (int)((p5 * 10000.0 / n) + 0.5) / 100.0 << "%" << endl;
    return 0;
}
