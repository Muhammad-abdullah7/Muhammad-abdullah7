#include <iostream>
using namespace std;
double totalincome(string screening, int rows, int columns);
int main() {
    string screening;
    int rows, columns;
    cout << "Enter the type of screening: ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    double total = totalincome(screening, rows, columns);
        cout << "Total income from tickets: " << total << " EUR" << endl;
    return 0;
}
double totalincome(string screening, int rows, int columns) {
    const double premiere = 12.00;  
    const double normal = 7.50;     
    const double discount = 5.00;   
    
    int totalseats = rows * columns;
    if (screening == "Premiere" || screening == "premiere") {
        return totalseats * premiere;
    } else if (screening == "Normal" || screening == "normal") {
        return totalseats * normal;
    } else if (screening == "Discount" || screening == "discount") {
        return totalseats * discount;
    } else {
        return 0;
    }
}
