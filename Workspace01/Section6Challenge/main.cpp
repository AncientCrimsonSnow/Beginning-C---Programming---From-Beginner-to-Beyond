#include <iostream>

using namespace std;

int main(){
    cout << "Hallo, welcome to Frank's Carpet Cleaning Service" << endl << endl;
    
    cout << "How many small rooms would u like cleaned? ";
    int smallRoomCount {0};
    cin >> smallRoomCount;
    
    cout << "How many large rooms would u like cleaned? ";
    int largeRoomCount {0};
    cin >> largeRoomCount;
    
    const double pricePerSmallRoom {25.0};
    const double pricePerLargeRoom {35.0};
    const double salesTax {0.06};
    const int estimateExpiry {30}; //days
    
    cout << endl << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << smallRoomCount << endl;
    cout << "Number of large rooms: " << largeRoomCount << endl;
    
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    
    double cost {pricePerSmallRoom * smallRoomCount + pricePerLargeRoom * largeRoomCount};
    cout << "Cost: $" << cost << endl;
    
    double tax {cost * salesTax};
    cout << "Tax: $" << tax << endl;
    
    cout << "================================" << endl;
    
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;
    return 0;
}