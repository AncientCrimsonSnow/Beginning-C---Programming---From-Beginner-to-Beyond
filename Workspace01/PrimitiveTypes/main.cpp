#include <iostream>

using namespace std;

int main(){
    
    //Character type
    char middleInitial {'J'};
    cout << "My middle initial is " << middleInitial << endl;
    
    //Integer types
    unsigned short int examScore {55};
    cout << "My exam score was " << examScore << endl;
    
    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;
    
    long peopleInFlorida {20'610'000};
    cout << "There are about " << peopleInFlorida << " people in Florida" << endl;
    
    long long peopleOnEarth {8'110'000'000};
    cout << "There are about " << peopleOnEarth << " people on earth" << endl;

    long long distanceToAlphaCentauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometers" << endl;
    
    //Floating point types
    float carPayment {401.23};
    cout << "My car payment is " << carPayment << endl;
    
    double pi {3.14159};
    cout << "PI is " << pi << endl;
    
    long double largeAmount {2.7e120};
    cout << largeAmount << " is a very big number" << endl;
    
    //Boolean type
    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << endl;
    
    //overflow example
    
    short value1 {30'000};
    short value2 {1'000};
    
    short product {value1 * value2};
    
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    return 0;
}