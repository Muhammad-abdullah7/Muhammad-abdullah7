#include <iostream>
using namespace std;

int calculate_money(int age, int machine_price, int toy_price) {
    int total_money = 0, toy_count = 0, money_gift = 10;
    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            total_money += money_gift - 1;
            money_gift += 10;
        } else {
            toy_count++;
        }
    }
    total_money += toy_count * toy_price;
    return total_money - machine_price;
}

int main() {
    int age, machine_price, toy_price;
    cin >> age >> machine_price >> toy_price;

    int result = calculate_money(age, machine_price, toy_price);
    if (result >= 0) {
        cout << "Yes! " << result << endl;
    } else {
        cout << "No! " << -result << endl;
    }
    return 0;
}
