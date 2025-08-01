#include <iostream>

using namespace std;

int main(){
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << endl << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    double temperatures [] {90.1, 89.8, 77.5, 81.6};
    cout << endl << "The first high temperature is: " << temperatures[0] << endl;

    temperatures[0] = 100.7;
    
    cout << "The first high temperature is now: " << temperatures[0] << endl;
    
    int scores[5] {};
    
    cout << endl << "First score at index 0: " << scores[0] << endl;
    cout << "Second score at index 1: " << scores[1] << endl;
    cout << "Third score at index 2: " << scores[2] << endl;
    cout << "Fourth score at index 3: " << scores[3] << endl;
    cout << "Firth score at index 4: " << scores[4] << endl;

    cout << endl << "Enter 5 test scores: ";
    cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
    
    cout << endl << "The updated array is:" << endl;
    cout << "First score at index 0: " << scores[0] << endl;
    cout << "Second score at index 1: " << scores[1] << endl;
    cout << "Third score at index 2: " << scores[2] << endl;
    cout << "Fourth score at index 3: " << scores[3] << endl;
    cout << "Firth score at index 4: " << scores[4] << endl;
    
    cout << endl << "Notice what the value of the array name is: " << scores << endl;
    return 0;
}