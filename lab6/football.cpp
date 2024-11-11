#include <iostream>
#include <string>  
using namespace std;
void cal_budget(double budget, const string category, int people) {
    double vippri = 499.99;
    double normalpri = 249.99;
    double transport_cost_per;
    if (people >= 1 && people <= 4) {
       transport_cost_per = 0.75;
    } else if (people >= 5 && people <= 9) {
        transport_cost_per = 0.60;
    } else if (people >= 10 && people <= 24) {
        transport_cost_per = 0.50;
    } else if (people >= 25 && people <= 49) {
      transport_cost_per = 0.40;
    } else {
    transport_cost_per = 0.25;
    }
    double trans_cost = budget * transport_cost_per;
    double remain_budget = budget - trans_cost;
    double tic_priceper_person;
    if (category == "VIP") {
      tic_priceper_person = vippri;
    } else if (category == "Normal") {
        tic_priceper_person = normalpri;
    } else {
        cout << "Invalid category!" << endl;
        return;
    }
    double totalticketcost = tic_priceper_person * people;
    if (remain_budget >= remain_budget) {
        cout << "Yes! You have " << remain_budget - totalticketcost<< " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << totalticketcost - remain_budget << " leva more." << endl;
    }
}
int main() {
    double budget;
    string cate;
    int people;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> cate;
    cout << "Enter the number of people: ";
    cin >> people;
    cal_budget(budget, cate, people);
    return 0;
}
