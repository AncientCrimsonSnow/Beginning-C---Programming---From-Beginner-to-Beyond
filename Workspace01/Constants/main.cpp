#include <iostream>

using namespace std;

int main(){
    cout << "Hallo, welcome to Frank's Carpet Cleaning Service" << endl << endl;;
    cout << "How many rooms would u like cleaned? ";
    
    int roomCount {0};
    cin >> roomCount;
    
    const double pricePerRoom {30.0};
    const double salesTax {0.06};
    const int estimateExpiry {30}; //days
    
    cout << endl << "Estimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << roomCount << endl;
    
    cout << "Price per room: $" << pricePerRoom << endl;
    
    double cost {pricePerRoom * roomCount};
    cout << "Cost: $" << cost << endl;
    
    double tax {cost * salesTax};
    cout << "Tax: $" << tax << endl;
    
    cout << "================================" << endl;
    
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;
    return 0;
}