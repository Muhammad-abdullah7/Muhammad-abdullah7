#include <iostream>
#include <cmath>
using namespace std;

void roots(double a, double b, double c) {
    double discriminant = (b*b) - (4*a*c);
    cout << "The discriminant of the given values is: " << discriminant << endl;
    
    if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "There is one real root: " << root << endl;
    } 
     if (discriminant > 0) {
        double root_1 = (-b+sqrt(discriminant)) / (2*a);
        double root_2 = (-b-sqrt(discriminant)) / (2*a);
        cout << "The first real root is: " << root_1 << endl;
        cout << "The second real root is: " << root_2 << endl;
    } 
    if(discriminant<0) {
        double realpart = -b / (2*a);
        double imagpart = sqrt(-discriminant) / (2*a);
        cout << "The first complex root is: " << realpart << " + " << imagpart << "i" << endl;
        cout << "The second complex root is: " << realpart << " - " << imagpart << "i" << endl;
    }
}

int main() {
    double A, B, C;
    cout << "Enter the value of A: ";
    cin >> A;
    cout << "Enter the value of B: ";
    cin >> B;
    cout << "Enter the value of C: ";
    cin >> C;

    if (A == 0) {
        cout << "Error! A must not be zero. This is not a quadratic equation." << endl;
    } 
    if(A>0||A<0) {
        roots(A, B, C);
    }

    return 0;
}
