#include <iostream>

using namespace std;

int main(){
    
    cout << "Enter the size of the room in this format: width height" << endl;
    
    int roomWidth {0};
    int roomHeight {0};
    
    cin >> roomWidth >> roomHeight;
    
    cout << "The area oft he room is " << roomWidth * roomHeight << " squaremeters";
    return 0;
}