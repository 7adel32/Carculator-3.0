// This code assumes that the input is valid and positive
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables for the first car
    string name1; // Name of the first car
    double fuelEconomy1; // Fuel economy in kmpl
    double price1; // Price in sar
    double fuelCost1; // Fuel cost in sar per liter

    // Declare variables for the second car
    string name2; // Name of the second car
    double fuelEconomy2; // Fuel economy in kmpl
    double price2; // Price in sar
    double fuelCost2; // Fuel cost in sar per liter

    // Declare variable for the break-even distance
    double distance;

    // Prompt and read input for the first car
    cout << "Enter the name, fuel economy, price and fuel cost of the first car: ";
    cin >> name1 >> fuelEconomy1 >> price1 >> fuelCost1;

    // Prompt and read input for the second car
    cout << "Enter the name, fuel economy, price and fuel cost of the second car: ";
    cin >> name2 >> fuelEconomy2 >> price2 >> fuelCost2;

    if (fuelCost1 == 0 || fuelCost2 == 0) {
        cout << "Invalid input. Fuel cost cannot be zero." << endl;
        return -1;
    }

    if (fuelEconomy1 == 0 || fuelEconomy2 == 0) {
        cout << "Invalid input. Fuel economy cannot be zero." << endl;
        return -1;
    }

    if (fuelCost1 / fuelEconomy1 == fuelCost2 / fuelEconomy2) {
        cout << "There is no break-even distance." << endl;
        return -1;
    }

    distance = (price2 - price1) / ((fuelCost1 / fuelEconomy1) - (fuelCost2 /
        fuelEconomy2));

    if (distance > 0) {
        cout << "The break-even distance between " << name1 << " and " << name2
            << " is " << distance << " km." << endl;
    }
    else {
        cout << "There is no break-even distance." << endl;
    }

    return 0;
}