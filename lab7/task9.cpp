#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int money, target_year;
    cin >> money >> target_year;

    int age = 18;
    double balance = money;

    for (int year = 1800; year <= target_year; year++) {
        if (year % 2 == 0) {
            balance -= 12000;
        } else {
            balance -= 12000 + 50 * age;
        }
        age++;
    }

    cout << fixed << setprecision(2);
    if (balance >= 0) {
        cout << "Yes! He will live a carefree life and will have " << balance << " dollars left." << endl;
    } else {
        cout << "He will need " << -balance << " dollars to survive." << endl;
    }

    return 0;
}
